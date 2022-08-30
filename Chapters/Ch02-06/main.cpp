/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;

bool isPrime(int n);


int main()
{
    int number = getInteger("Find primes in (enter a number greater than 1): ");
    for (int i = 2; i <= number; i++) {
        if (isPrime(i)) {
            cout << "Found a prime: " << i << endl;
        }
    }
    return 0;
}

bool isPrime(int n) {
    // Ignore 1 and n since we know it divides by it.
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
