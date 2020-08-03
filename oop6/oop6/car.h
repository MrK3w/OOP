#pragma once
#include <iostream>
using namespace std;

class Auto
{
private:
	string name;
	int topSpeed;
	double weight;
	double cena;
public:
	Auto(string n, int s, double w, double c);
	string getName();
	int getTopSpeed();
	double getWeight();
	double getCena();

};

