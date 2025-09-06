/*
 * main.cpp
 *
 *  Created on: 19 авг. 2025 г.
 *      Author: abreg
 */

#include "Library.h"
#include <iostream>
using namespace std;

int main() {
	Library book1("Sun Tzu", "The Art of War", 9781853267796, true);
	book1.menu();

	return 0;
}
