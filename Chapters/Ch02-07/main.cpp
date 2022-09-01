/*
 * File: main.cpp
 * --------------
 * Chapter 2 - Problem 7
 * Implement sqrt using 'successive approximation'.
 *
 * You can use successive approximation to determine the square root of x by adopting the following strategy:
 * 1. Begin by guessing that the square root is x / 2. Call that guess g.
 *
 * 2. The actual square root must lie between g and x / g. At each step in thesuccessive approximation,
 *    generate a new guess by averaging g and x / g.
 *
 * 3. Repeat step 2 until the values g and x / g are as close together as the machine precision allows.
 *    In C++, the best way to check for this condition is to test whether the average is equal to either
 *    of the values used to generate it.
 */

#include "console.h"
#include "simpio.h"
using namespace std;

double sqrt(double x);


int main()
{
    double number = getReal("Enter a number");
    cout << "The square root of " << number << " is: " << sqrt(number) << endl;
    return 0;
}

double sqrt(double x) {
    double g = x / 2;
    double average;

    while(true) {
        average = (g + (x/g)) / 2;
        if (average == g) {
            break;
        }

        g = average;
    }
    return g;
}
