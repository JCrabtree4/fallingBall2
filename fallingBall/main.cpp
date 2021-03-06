#include "stdafx.h"
#include <iostream>

double calculateDistanceFallen(double z, int y);
double getInitialHeight();

int main()
{
	const double z{ getInitialHeight() };

	std::cout << "The height of the ball after 1 second is " << calculateDistanceFallen(z, 1) << " meters." << std::endl;

	std::cout << "The height of the ball after 2 seconds is " << calculateDistanceFallen(z, 2) << " meters." << std::endl;

	std::cout << "The height of the ball after 3 seconds is " << calculateDistanceFallen(z, 3) << " meters." << std::endl;

	std::cout << "The height of the ball after 4 seconds is " << calculateDistanceFallen(z, 4) << " meters." << std::endl;

	std::cout << "The height of the ball after 5 seconds is " << calculateDistanceFallen(z, 5) << " meters." << std::endl;

    return 0;
}

