/**
 * File: life.cpp
 * --------------
 * Implements the Game of Life.
 */

#include <iostream>  // for cout
using namespace std;

#include "console.h" // required of all files that contain the main function
#include "simpio.h"  // for getLine

#include "life-constants.h"  // for kMaxAge
#include "life-graphics.h"   // for class LifeDisplay

static void waitForEnter(string message) {
    cout << message;
    (void) getLine();
}

static void welcome() {
	cout << "Welcome to the game of Life, a simulation of the lifecycle of a bacteria colony." << endl;
	cout << "Cells live and die by the following rules:" << endl << endl;
	cout << "\tA cell with 1 or fewer neighbors dies of loneliness" << endl;
	cout << "\tLocations with 2 neighbors remain stable" << endl;
	cout << "\tLocations with 3 neighbors will spontaneously create life" << endl;
	cout << "\tLocations with 4 or more neighbors die of overcrowding" << endl << endl;
	cout << "In the animation, new cells are dark and fade to gray as they age." << endl << endl;
    waitForEnter("Hit [enter] to continue....   ");
}

int main() {
    LifeDisplay display;
    display.setTitle("Game of Life");
    display.setDimensions(40, 70);
    display.drawCellAt(0, 0, 1);
    display.drawCellAt(19, 34, 5);
    display.drawCellAt(39, 69, kMaxAge);

    printf ("Width trick: %*d \n", 5, kMaxAge);
    welcome();
    return 0;
}
