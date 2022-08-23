/*
 * Exercise: 2
 * -----------
 * Reimplement the distance-conversion program from exercise 2 in Chapter 1 so 
 * that it uses a function. In this case, the function must produce both the 
 * number of feet and the number of inches, which means that you need to use 
 * call by reference to return these values.
 * 
 * Write a program that converts a distance in meters to the corresponding 
 * English distance in feet and inches. The conversion factors you need are
 * 1 inch = 0.0254 meters 
 * 1 foot = 12 inches
 */

#include <iostream>
#include "console.h"
using namespace std;

/* Function prototype */

void convertDistance(double meters, int &feet, double &inches);


/* Main program */

int main() {
   double meters, inches;
   int feet;

   meters = 10.0;
   convertDistance(meters, feet, inches);

   cout << meters << " meters is equivalent to" << endl;
   cout << feet << " feet and " << inches << " inches" << endl;
   return 0;
}

void convertDistance(double meters, int &feet, double &inches) {
   double totalIn = meters / 0.0254;
   feet = totalIn / 12;
   inches = totalIn - (feet * 12);
}
