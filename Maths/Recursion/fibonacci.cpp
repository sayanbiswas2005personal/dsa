#include <iostream>
using namespace std;

// Recursive version
// Logic: Standard recursion - fib(n) = fib(n-1) + fib(n-2), with base cases fib(0)=0, fib(1)=1.
// TC: O(2^n) - Exponential due to overlapping subproblems.
// SC: O(n) - Recursion stack depth.
int fibRecursive(int n) {
    if (n <= 1) return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

// Brute force version (Iterative)
// Logic: Uses a loop to compute Fibonacci iteratively, building from base cases up to n.
// TC: O(n) - Linear loop.
// SC: O(1) - Constant space using only a few variables.
int fibIterative(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 10;
    cout << "Recursive fib(" << n << "): " << fibRecursive(n) << endl;
    cout << "Iterative fib(" << n << "): " << fibIterative(n) << endl;
    return 0;
}