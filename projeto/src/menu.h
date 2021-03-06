#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <fstream>
#include "Cidade.h"
#include "util.h"

using namespace std;

/**
 * This function prints on the screen the ClosestSpot menu, inquiring the user about the ID of the starting
 * point, the name of the place he wants to go, if it wants to refill it's car tank and the maximum distance
 * to walk from the park to the destiny point.
 *
 * @param c is the Cidade that keeps the information about the streets
 */
void closestSpot(Cidade &c);
/**
 * This function prints on the screen the CheapestSpot menu, inquiring the user about the ID of the starting
 * point, the name of the place he wants to go, if he wants to refill his car tank, the maximum distance
 * to walk from the park to the destiny point and how much gas(petrol) is car consumes.
 *
 * @param c is the Cidade that keeps the information about the streets
 */
void cheapestSpot(Cidade &c);

void exactStreetSearch(Cidade &c);

void aproxStreetSearch(Cidade &c);
/**
 * This function prints on the screen the Main Menu, that contains 3 options: ClosestParkingSpot, CheapestParkingSpot
 * and exiting the menu.
 *
 * @param c is the Cidade that keeps the information about the streets
 */
void mainMenu(Cidade &c);
