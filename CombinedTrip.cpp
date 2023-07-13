#include "CombinedTrip.h"
#include <iostream>
using namespace std;

CombinedTrip::CombinedTrip(const char* destinations, int freeTime,const char* flightNumber, int duration, const char regNumb[5], int distance, int carDur)
	:AirTravel(flightNumber, duration), CarTravel(regNumb, distance, carDur)
{
	/*destinations = new char(strlen(destinations));*/
	size_t length = strlen(destinations)+1;
	this->destinations = new char[length];
	memcpy_s(this->destinations, length, destinations, length);
	this->freeTime = freeTime;
}

int CombinedTrip::getDuration()
{
	return AirTravel::getDuration()+CarTravel::getDuration()+freeTime;
}

void CombinedTrip::print()
{
	AirTravel::print();
	CarTravel::print();
	cout << "The free time is: " << freeTime << " and the destinations are: " << destinations << endl;
}

CombinedTrip::~CombinedTrip()
{
	delete[] destinations;
}
