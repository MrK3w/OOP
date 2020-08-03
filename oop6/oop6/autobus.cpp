#include "autobus.h"
autobus::autobus(string n, int s, double w, double c, double m, int p) : Nakladak(n, s, w,c,m)
{
	this->passanger = p;
}

int autobus::getPassanger()
{
	return this->passanger;
}
