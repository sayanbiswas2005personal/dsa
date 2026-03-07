#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> printDivisors(int n) {
    vector<int> divisors;
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    int num1 = 36;
    int num2 = 28;
    int num3 = 100;
    
    vector<int> div1 = printDivisors(num1);
    cout << "Divisors of " << num1 << ": ";
    for (int d : div1) {
        cout << d << " ";
    }
    cout << endl;
    
    vector<int> div2 = printDivisors(num2);
    cout << "Divisors of " << num2 << ": ";
    for (int d : div2) {
        cout << d << " ";
    }
    cout << endl;
    
    vector<int> div3 = printDivisors(num3);
    cout << "Divisors of " << num3 << ": ";
    for (int d : div3) {
        cout << d << " ";
    }
    cout << endl;
    
    return 0;
}
