#include <iostream>
#include <cmath>
using namespace std;

int countDigitsOptimized(int n) {
    return log10(n) + 1;
}

int countDigitsBruteForce(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int num = 12345;
    
    cout << "Number: " << num << endl;
    cout << "Optimized approach: " << countDigitsOptimized(num) << endl;
    cout << "Brute force approach: " << countDigitsBruteForce(num) << endl;
    
    return 0;
}
