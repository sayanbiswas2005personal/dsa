#include <iostream>
#include <cmath>
using namespace std;

// Time: O(log n), Space: O(1)
// Logic: Counts the number of digits in the number by repeatedly dividing by 10.
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Time: O(log n), Space: O(1)
// Logic: Checks if the number equals the sum of its digits each raised to the power of digit count.
bool isArmstrong(int n) {
    int original = n;
    int digitCount = countDigits(n);
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digitCount);
        n /= 10;
    }
    
    return sum == original;
}

int main() {
    int num1 = 153;
    int num2 = 9474;
    int num3 = 1000;
    int num4 = 9;
    
    cout << num1 << " is Armstrong: " << (isArmstrong(num1) ? "true" : "false") << endl;
    cout << num2 << " is Armstrong: " << (isArmstrong(num2) ? "true" : "false") << endl;
    cout << num3 << " is Armstrong: " << (isArmstrong(num3) ? "true" : "false") << endl;
    cout << num4 << " is Armstrong: " << (isArmstrong(num4) ? "true" : "false") << endl;
    
    return 0;
}
