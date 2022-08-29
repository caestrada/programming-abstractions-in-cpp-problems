/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include "error.h"
#include <cmath>
#include <iomanip>
using namespace std;

/* Function Prototipes */
int windChill(double t, double v);
int roundToNearestInt(double x);

int main()
{
//    double temp = getReal("Enter a tempereture: ");
//    cout << "Temp:  " << temp << endl;
//    double windSpeed = getReal("Enter a wind speed: ");
//    cout << "Wind speed: " << windSpeed << endl;
//    double wind = windChill(temp, windSpeed);
//    cout << "Wind chill: " << wind << endl;

    cout << "     ";
    for (int t = 40; t >= -45; t -= 5) {
        cout << setw(5) << right << t;
    }
    cout << endl << "     +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl;
    for (int v = 5; v <= 60; v += 5) {
        cout << setw(4) << v << "|";
        for (int t = 40; t >= -45; t -= 5) {
            cout << setw(5) << right << windChill((double) t, (double) v);
        }
        cout << "|" << endl;
    }
    cout << "     +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl;

    for (int t = 40; t >= -45; t -= 5) {
        for (int v = 5; v <= 60; v += 5) {
//             cout << t << " " << v << endl;
//            double wind = windChill((double) t, (double) v);
//            cout << "Wind: " << wind << endl;
//            cout << setw(10) << v << setw(10) << t << setw(10) <<windChill((double) t, (double) v) << setfill('-') << endl;
        }
    }
    return 0;
}

int windChill(double t, double v) {
    if (v == 0) {
        return t;
    }

    if (t > 40) {
        error("Hello");
    }
    double windChill = 35.74 + (0.6215 * t) - (35.75 * pow(v,0.16)) + (0.4275 * t * pow(v, 0.16));
   return roundToNearestInt(windChill);
}


int roundToNearestInt(double x) {
    bool isNegative = (x < 0);
    if(isNegative) {
        x = x - 0.5;
    } else {
        x = x + 0.5;
    }

    return (int) x;
}
