/*
 * File: Exercise01.cpp
 * --------------------
 * If you did not do so the first time around, rewrite the Celsius-to-Fahrenheit 
 * program from exercise 1 in Chapter 1 so that it uses a function to perform 
 * the conversion.
 * 
 * Write a program that reads in a temperature in degrees Celsius and displays 
 * the corresponding temperature in degrees Fahrenheit. The conversion formula 
 * is:
 * F = (9/5)C + 32
 */

#include <iostream>
#include "console.h"
using namespace std;

double celsiusToFahrenheit(double c) {
   double f = (c * 9/5) + 32;
   return f;
}

int main() {
   cout << "Exercise 01" << endl;
   double celsius = 32.0;
   cout << "Convert " << celsius << " to Fahrenheit " << celsiusToFahrenheit(celsius) << endl;
   return 0;
}
