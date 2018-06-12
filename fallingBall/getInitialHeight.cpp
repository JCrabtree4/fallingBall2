#include "stdafx.h"
#include <iostream>

double getInitialHeight()
{
	std::cout << "Enter the starting height of the ball in meters: ";
	double x{};
	std::cin >> x;
	return x;
}