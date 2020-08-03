#pragma once
#include <string>
#include "client.h"

class Account
{
public:
	Account(int n, Client* c);
	Account(int n, Client* c, double ir);
	~Account();
	int GetNumber();
	static void SetInterestRate(double ir);
	double GetBalance();
	double GetInterestRate();
	Client* GetOwner();
	bool CanWithDraw(double a);
	static int GetObjectsCount();
	void Deposit(double a);
	bool WithDraw(double a);
	void AddInterest();
	void Print();

private:
	int number;
	double balance;
	double interestRate;
	static int objectsCount;
	static double interestrate;
	Client* owner;
	Client* partner;
};

