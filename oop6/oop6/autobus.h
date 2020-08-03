#pragma once
#include "nakladak.h"

class autobus : public Nakladak
{
	private:
		int passanger;
	public:
		autobus(string n, int s, double w, double c, double m, int p);
		int getPassanger();
};

