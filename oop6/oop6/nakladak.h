#pragma once
#include "car.h"
	class Nakladak : public Auto
	{
	private:
		double Maxweight;
	public:
		Nakladak(string n, int s, double w, double c,double m);
		double GetMaxWeight();

};

