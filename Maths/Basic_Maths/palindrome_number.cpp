#include <iostream>
using namespace std;

// Time: O(log n), Space: O(1)
// Logic: Reverses the number digit by digit and compares with the original.
bool isPalindrome(int x) {
    if (x < 0) return false;
    long long rev = 0;
    int org = x;
    while (x != 0) {
        int temp = x % 10;
        rev = rev * 10 + temp;
        x /= 10;
    }
    return rev == org;
}

int main() {
    int num1 = 121;
    int num2 = -121;
    int num3 = 12321;
    
    cout << num1 << " is palindrome: " << (isPalindrome(num1) ? "true" : "false") << endl;
    cout << num2 << " is palindrome: " << (isPalindrome(num2) ? "true" : "false") << endl;
    cout << num3 << " is palindrome: " << (isPalindrome(num3) ? "true" : "false") << endl;
    
    return 0;
}
