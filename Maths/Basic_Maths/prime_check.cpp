#include <iostream>
#include <vector>
using namespace std;

// Time: O(n), Space: O(1)
// Logic: Checks divisibility from 2 to n-1, inefficient for large n.
bool isPrimeBruteForce(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Time: O(sqrt(n)), Space: O(1)
// Logic: Checks divisibility up to sqrt(n) using 6k±1 optimization for efficiency.
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Time: O(n log log n), Space: O(n)
// Logic: Uses Sieve of Eratosthenes to mark non-primes and count primes up to n-1.
int countPrimes(int n) {
    // Initialize a boolean array to mark primes, assuming all are prime initially
    vector<bool> prime(n, true);
    
    // 0 and 1 are not prime
    if (n > 0) prime[0] = false;
    if (n > 1) prime[1] = false;
    
    int count = 0;
    
    // Iterate from 2 to n-1
    for (int i = 2; i < n; i++) {
        // If the number is still marked as prime
        if (prime[i]) {
            // Increment the count of primes
            count++;
            
            // Mark all multiples of i as non-prime, starting from i*i to avoid redundant work
            for (long long j = (long long)i * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    
    return count;
}

int main() {
    int num1 = 29;
    int num2 = 15;
    int num3 = 2;
    
    cout << num1 << " is prime (Brute): " << (isPrimeBruteForce(num1) ? "true" : "false") << endl;
    cout << num1 << " is prime (Optimal): " << (isPrime(num1) ? "true" : "false") << endl;
    
    cout << num2 << " is prime (Brute): " << (isPrimeBruteForce(num2) ? "true" : "false") << endl;
    cout << num2 << " is prime (Optimal): " << (isPrime(num2) ? "true" : "false") << endl;
    
    cout << num3 << " is prime (Brute): " << (isPrimeBruteForce(num3) ? "true" : "false") << endl;
    cout << num3 << " is prime (Optimal): " << (isPrime(num3) ? "true" : "false") << endl;
    
    int limit = 30;
    cout << "\nNumber of primes less than " << limit << ": " << countPrimes(limit) << endl;
    
    return 0;
}