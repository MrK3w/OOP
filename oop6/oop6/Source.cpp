#include <iostream>
#include <stdio.h>
#include "car.h"
#include "nakladak.h"
#include "autobus.h"
using namespace std;

int main()
{
	Auto* a = new Auto("BMW M6", 305, 1850,500000);
	Auto* a1 = new Auto("Nissan GT-R Nismo", 315, 1738, 80000);
	Auto* a2 = new Auto("Ferrari 488", 330, 1370.5, 7000);
	Nakladak* h = new Nakladak("RC TAHAC SCANIA", 100, 2500.2, 100000, 2000);
	Nakladak* h1 = new Nakladak("Siku super", 80, 3000, 250000, 5000);
	autobus* au = new autobus("Volvo Scania", 120, 2500.5, 185000, 7, 100);


	cout << "Auta" << endl;
	cout << "Nazev:" << a->getName() << "|Max. rychlost:" << a->getTopSpeed() << "km/h" << "|Vaha:" << a->getWeight() << "kg" << "|cena:" << a->getCena() << "Kc||" << endl;
	cout << "Nazev:" << a1->getName() << "|Max. rychlost:" << a1->getTopSpeed() << "km/h" << "|Vaha:" << a1->getWeight() << "kg" << "|cena:" << a1->getCena() << "Kc||" << endl;
	cout << "Nazev:" << a2->getName() << "|Max. rychlost:" << a2->getTopSpeed() << "km/h" << "|Vaha:" << a2->getWeight() << "kg" << "|cena:"<< a2->getCena() << "Kc||" << endl;
	puts("");

	cout << "Nakladaky" << endl;
	cout << "Nazev:" << h->getName() << "|Max. rychlost:" << h->getTopSpeed() << "km/h" << "|Vaha:" << h->getWeight() << "kg" << "|Maximalni kapacita:" << h->GetMaxWeight() << "kg" << "|cena:" << h->getCena() << "Kc||" << endl;
	cout << "Nazev:" << h1->getName() << "|Max. rychlost:" << h1->getTopSpeed() << "km/h" << "|Vaha:" << h1->getWeight() << "kg" << "|Maximalni kapacita:" << h1->GetMaxWeight() << "kg" << "|cena:" << h->getCena() << "Kc||" << endl;
	puts("");

	cout << "Autobusy" << endl;
	cout << "Nazev:" << au->getName() << "|Max. rychlost:" << au->getTopSpeed() << "km/h" << "|Vaha:" << au->getWeight() << "kg" << "|Maximalni kapacita:" << au->GetMaxWeight() << "kg" << "|Max Pasazeru:" << au->getPassanger() << "|cena:" << au->getCena() << "Kc||" << endl;
}

