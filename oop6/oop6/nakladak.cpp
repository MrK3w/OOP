#include "nakladak.h"
Nakladak::Nakladak(string n, int s, double w, double c, double m) : Auto(n, s, w,c)
{
	this->Maxweight = m;
}

double Nakladak::GetMaxWeight()
{
	return this->Maxweight;
}