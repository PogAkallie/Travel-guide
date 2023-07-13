#include "AirTravel.h"
#include <iostream>
#include <cstring>
using namespace std;

AirTravel::AirTravel(const char* flightNumber, int duration)
{
	this->duration = duration;
	size_t length = strlen(flightNumber)+1;
	this->flightNumber = new char[length];
	memcpy_s(this->flightNumber, length, flightNumber, length);
}

AirTravel::~AirTravel()
{
	delete[] flightNumber;
}

int AirTravel::getDuration() 
{
	return duration;
}

void AirTravel::print() 
{
	cout << "The airtravel duration is: " << duration << " and the fligh number is: " << flightNumber << endl; 
}
