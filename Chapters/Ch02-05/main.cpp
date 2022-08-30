/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;

bool isPerfect(int n);


int main()
{
    for (int i = 1; i < 1000000; i++) {
        if (isPerfect(i)) {
            cout << "Found a perfect number: " << i << endl;
        }
    }

    return 0;
}

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i != 0) {
            continue;
        }

        sum += i;
    }

    return sum == n;
}
