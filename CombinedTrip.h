#pragma once
#include "AirTravel.h"
#include "CarTravel.h"

class CombinedTrip :public AirTravel, public CarTravel
{
private:
	char* destinations;
	int freeTime;
public:
	CombinedTrip(const char* destinations, int freeTime, const char* flightNumber, int duration, const char regNumb[5], int distance, int carDur);
	int getDuration() override;
	void print() override;

	~CombinedTrip();
};