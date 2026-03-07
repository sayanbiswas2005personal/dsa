#include <iostream>
#include <climits>
using namespace std;

int reverseBruteForce(int x) {
    int rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int reverseOptimized(int x) {
    int rev = 0;
    while (x != 0) {
        int temp = x % 10;
        if (rev > INT_MAX / 10 || rev == INT_MAX / 10 && temp > 7) return 0;
        if (rev < INT_MIN / 10 || rev == INT_MIN / 10 && temp < -8) return 0;
        rev = rev * 10 + temp;
        x /= 10;
    }
    return rev;
}

int main() {
    int num = 123;
    
    cout << "Number: " << num << endl;
    cout << "Brute force approach: " << reverseBruteForce(num) << endl;
    cout << "Optimized approach: " << reverseOptimized(num) << endl;
    
    int negativeNum = -456;
    cout << "\nNumber: " << negativeNum << endl;
    cout << "Brute force approach: " << reverseBruteForce(negativeNum) << endl;
    cout << "Optimized approach: " << reverseOptimized(negativeNum) << endl;
    
    return 0;
}
