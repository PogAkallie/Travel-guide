#pragma once
#include "AllTravel.h"
class AirTravel :public AllTravel
{
private:
	char* flightNumber;
	int duration;
public:
	AirTravel(const char* flightNumber, int duration);
	~AirTravel();
	
	int getDuration() override;
	void print() override;

};