#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int num1 = 48;
    int num2 = 18;
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    int num3 = 100;
    int num4 = 50;
    
    cout << "GCD of " << num3 << " and " << num4 << " is: " << gcd(num3, num4) << endl;
    
    return 0;
}
