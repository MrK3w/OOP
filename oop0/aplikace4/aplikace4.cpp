#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Osoba
{
private:
	string jmeno;
	string email;
	string dokument;

public:
	Osoba(string j, string e, string d);
	string GetName();
	string GetMail();
	string GetDocument();
};

Osoba::Osoba(string j, string e, string d)
{
	this->jmeno = j;
	this->email = e;
	this->dokument = d;
}
string Osoba::GetName()
{
	return this->jmeno;
}


string Osoba::GetMail()
{
	return this->email;
}


string Osoba::GetDocument()
{
	return this->dokument;
}


int main()
{
	Osoba* o1 = new Osoba("Jakub Pietrus", "jakub.pietrus.st@vsb.cz", "aplikace4.pdf");
	Osoba* o2 = new Osoba("Dominik Matoha", "matoha@seznam.cz", "aplikace5.pdf");
	cout << o1->GetName() << " " << o1->GetMail() << " " << o1->GetDocument() << endl;
	cout << o2->GetName() << " " << o2->GetMail() << " " << o2->GetDocument() << endl;
	delete o1;
	delete o2;
	return 0;
}

