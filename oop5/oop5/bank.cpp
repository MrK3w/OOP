#include "Bank.h"
#include <iostream>

Bank::Bank(int c, int a)
{
	this->clients = new Client * [c];
	this->clientsCount = 0;
	this->accounts = new Account * [a];
	this->accountsCount = 0;
}

Bank::~Bank()
{

	for (int i = 0; i < clientsCount; i++)
	{
		delete clients[i];
	}
	delete[] clients;
	for (int i = 0; i < accountsCount; i++)
	{
		delete accounts[i];
	}
	delete[] accounts;
}


Client* Bank::GetClient(int c)
{
	for (int i = 0; i < this->clientsCount; i++)
	{
		if (clients[i]->GetCode() == c)
		{
			return clients[i];
		}
	}

	return nullptr;
}

Account* Bank::GetAccount(int n)
{
	for (int i = 0; i < this->accountsCount; i++)
	{
		if (accounts[i]->GetNumber() == n)
		{
			return accounts[i];
		}
	}

	return nullptr;
}

Client* Bank::CreateClient(int c, string n)
{
	Client* temp = new Client(c, n);

	this->clients[this->clientsCount++] = temp;
	return temp;
}

Account* Bank::CreateAccount(int n, Client* c)
{
	Account* temp = new Account(n, c);

	this->accounts[this->accountsCount++] = temp;
	return temp;
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
	Account* temp = new Account(n, c, ir);

	this->accounts[this->accountsCount++] = temp;
	return temp;
}

PartnerAccount* Bank::CreateAccount(int n, Client* c, Client* p)
{
	PartnerAccount* temp = new PartnerAccount(n, c, p);
	this->accounts[this->accountsCount++] = temp;
	return temp;
}
PartnerAccount* Bank::CreateAccount(int n, Client* c, Client* p, double ir)
{
	PartnerAccount* temp = new PartnerAccount(n, c, p,ir);
	this->accounts[this->accountsCount++] = temp;
	return temp;
}

void Bank::AddInterest()
{
	for (int i = 0; i < this->accountsCount; i++)
	{
		this->accounts[i]->AddInterest();
	}
}

void Bank::Print()
{
	for (int i = 0; i < accountsCount; i++)
	{
		accounts[i]->Print();
		cout << endl;
	}
}
