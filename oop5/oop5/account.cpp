#include "Account.h"
#include "client.h"
#include <iostream>
int Account::objectsCount = 0;
int Client::objectsCount = 0;
double Account::interestrate = 0.1;

Client::Client(int code, string name)
{
	this->code = code;
	this->name = name;
	Client::objectsCount += 1;
}

Client::~Client()
{
	Client::objectsCount -= 1;
}

int Client::GetObjectsCount()
{
	return Client::objectsCount;
}

string Client::GetName()
{
	return this->name;
}

int Client::GetCode()
{
	return this->code;
}
void Client::Print1()
{
	cout << GetCode() << ":" << GetName();
}

Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->interestRate = 1;
	this->balance = 0;
	Account::objectsCount += 1;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->interestRate = ir;
	this->balance = 0;
	Account::objectsCount += 1;
}


Account::~Account()
{

	Account::objectsCount -= 1;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

Client* Account::GetOwner()
{
	return this->owner;
}


bool Account::CanWithDraw(double a)
{
	return (balance >= a);
}

void Account::Deposit(double a)
{
	this->balance += a;
}

void Account::SetInterestRate(double ir)
{
	Account::interestrate = ir;
}

double Account::GetInterestRate()
{
	if (interestRate == 1) return this->interestrate;
	return this->interestRate;
}

bool Account::WithDraw(double a)
{
	if (this->CanWithDraw(a))
	{
		this->balance -= a;
		return true;
	}

	return false;
}

void Account::AddInterest()
{
	balance+=balance* GetInterestRate();
	
}
void Account::Print()
{
	cout << GetNumber() << "> Majitel uctu: [";	
	GetOwner()->Print1();
	cout << "] Na ucte: " << GetBalance() << " Urok:" << GetInterestRate();
}

int Account::GetObjectsCount()
{
	return Account::objectsCount;
}
