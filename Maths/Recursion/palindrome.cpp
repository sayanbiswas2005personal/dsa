#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Recursive version (given)
// Logic: Uses two pointers with recursion to check palindrome, skipping non-alnum and ignoring case.
// TC: O(n) - Each character processed at most once.
// SC: O(n) - Recursion stack depth up to O(n).
bool helper(string& s, int start, int end) {
    while (start < end && !isalnum(s[start])) start++;
    while (start < end && !isalnum(s[end])) end--;
    if (start >= end) return true;
    if (tolower(s[start]) != tolower(s[end])) return false;
    return helper(s, start + 1, end - 1);
}

bool isPalindromeRecursive(string s) {
    return helper(s, 0, s.length() - 1);
}

// Brute force version
// Logic: Cleans string by removing non-alnum and lowercasing, then reverses and compares.
// TC: O(n) - Linear clean, reverse, and compare.
// SC: O(n) - Extra space for cleaned and reversed strings.
bool isPalindromeBruteForce(string s) {
    string cleaned;
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    return cleaned == reversed;
}

int main() {
    // Example usage
    string s = "A man, a plan, a canal: Panama";
    cout << "Recursive: " << (isPalindromeRecursive(s) ? "true" : "false") << endl;
    cout << "Brute Force: " << (isPalindromeBruteForce(s) ? "true" : "false") << endl;
    return 0;
}