#include<iostream>
using namespace std;

class hamburger {
public:
	double getprice() {
		return this->cena;
	}
	double getcalorie() {
		return this->kalorie;
	}
private:
	double cena = 30;
	double kalorie = 130;
};

class Cola {
public:
	double getprice() {
		return this->cena;
	}
	double getcalorie() {
		return this->kalorie;
	}
private:
	double cena = 40;
	double kalorie = 150;
};

class vanillashake {
public:
	double getprice() {
		return this->cena;
	}
	double getcalorie() {
		return this->kalorie;
	}

private:
	double cena = 50;
	double kalorie = 250;
};

class Nakup {
public:
	double celkova_cena = 0;
	double celkove_kalorie = 0;
	void print();
	void polozkafaktury(hamburger h) {
		this->celkova_cena += h.getprice();
		this->celkove_kalorie += h.getcalorie();
		cout << "Hamburger: " << h.getprice() << "Kc\t" << h.getcalorie() << "Kcal " << endl;
	}
	void polozkafaktury(Cola c) {
		this->celkova_cena += c.getprice();
		this->celkove_kalorie += c.getcalorie();
		cout << "Coca-cola: " << c.getprice() << "Kc\t" << c.getcalorie() << "Kcal " << endl;
	}
	void polozkafaktury(vanillashake v) {
		this->celkova_cena += v.getprice();
		this->celkove_kalorie += v.getcalorie();
		cout << "Vanilkovy shake: " << v.getprice() << "Kc\t" << v.getcalorie() << "Kcal " << endl;
	}
};

void Nakup::print() {

	cout << "Celkova cena nakupu je: " << this->celkova_cena << "Kc " << "\tCelkove kalorie jsou: " << this->celkove_kalorie << "Kcal" << endl;
}

int main() {

	hamburger hamburger;
	Cola cola;
	vanillashake Shaker;
	Nakup jidlo;
	jidlo.polozkafaktury(hamburger);
	jidlo.polozkafaktury(cola);
	jidlo.polozkafaktury(cola);
	jidlo.polozkafaktury(Shaker);
	cout << "__________________________________________________________\n" << endl;
	jidlo.print();

	return 0;
}

