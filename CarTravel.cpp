#include "CarTravel.h"
#include <iostream>
#include <cstring>
using namespace std;

CarTravel::CarTravel(const char regnumb[5], int distance, int duration)
{
	this->distance = distance;
	this->duration = duration;
	strcpy_s(regNumb, regnumb);
}

CarTravel::CarTravel(const CarTravel& other): CarTravel(other.regNumb, other.distance, other.duration)
{}

CarTravel& CarTravel::operator=(const CarTravel& other)
{
	if (this != &other)
	{
		strcpy_s(regNumb, other.regNumb);
		distance = other.distance;
		duration = other.duration;
	}
	return *this;
}

int CarTravel::getDuration()
{
	return duration;
}

void CarTravel::print()
{
	cout << "The car travel duration is: " << duration << ", the distance is: " << distance << " and the registration number of the car is: " << regNumb << endl;
}
