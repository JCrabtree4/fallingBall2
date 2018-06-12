#include "stdafx.h"
#include <iostream>
#include "constants.h"

double getInitialHeight();

double calculateDistanceFallen(double z, int y)
{
	double x{ z - ((constants::gravity * (y*y)) / 2) };

	if (x > 0)
		return x;
	else
		return 0;
}