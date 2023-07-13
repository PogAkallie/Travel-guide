#pragma once
#include "AllTravel.h"
class CarTravel : public AllTravel
{
private:
	char regNumb[5];
	int distance, duration;
public:
	CarTravel(const char regNumb[5], int distance, int duration);
	CarTravel(const CarTravel& other);
	CarTravel& operator=(const CarTravel& other);

	int getDuration() override;
	void print() override;
};