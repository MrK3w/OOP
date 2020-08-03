#include "car.h"

Auto::Auto(string n, int s, double w, double c)
{
	this->name = n;
	this->topSpeed = s;
	this->weight = w;
	this->cena = c;
}

string Auto::getName()
{
	return this->name;
}

int Auto::getTopSpeed()
{
	return this->topSpeed;
}

double Auto::getWeight()
{
	return this->weight;
}

double Auto::getCena()
{
	return this->cena;
}
