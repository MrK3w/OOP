#include <iostream>
#include <stdio.h>
using namespace std;

class Client
{
private:
	int code;
	string name;

public:
	Client(int c, string n);

	int GetCode();
	string GetName();
};

class Account
{
private:
	int number;
	double balance;
	double interestRate;

	Client* owner;
	Client* partner;

public:
	Account(int n, Client* c);
	Account(int n, Client* c, double ir);
	Account(int n, Client* c, Client* p);
	Account(int n, Client* c, Client* p, double ir);

	int GetNumber();
	double GetBalance();
	double GetInterestRate();
	Client* GetOwner();
	Client* GetPartner();
	bool CanWithdraw(double a);

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();
};

class Bank
{
private:
	Client** clients;
	int clientsCount;

	Account** accounts;
	int accountsCount;

public:
	Bank(int c, int a);
	~Bank();

	Client* GetClient(int c);
	Account* GetAccount(int n);

	Client* CreateClient(int c, string n);
	Account* CreateAccount(int n, Client* c);
	Account* CreateAccount(int n, Client* c, double ir);
	Account* CreateAccount(int n, Client* c, Client* p);
	Account* CreateAccount(int n, Client* c, Client* p, double ir);

	void AddInterest();

};

Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
}

int Client::GetCode()
{
	return this->code;
}

string Client::GetName()
{
	return this->name;
}

Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->interestRate = 1;
	this->balance = 0;
	this->partner = nullptr;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->interestRate = ir;
	this->balance = 0;
	this->partner = nullptr;
}

Account::Account(int n, Client* c, Client* p)
{
	this->number = n;
	this->owner = c;
	this->interestRate = 1;
	this->balance = 0;
	this->partner = p;
}

Account::Account(int n, Client* c, Client* p, double ir)
{
	this->number = n;
	this->owner = c;
	this->interestRate = ir;
	this->balance = 0;
	this->partner = p;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

Client* Account::GetPartner()
{
	return this->partner;
}

bool Account::CanWithdraw(double a)
{
	if (this->balance >= a)
		return true;
	else
		return false;
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	if (this->CanWithdraw(a) == false)
		return false;
	else
	{
		this->balance -= a;
		return true;
	}
}

void Account::AddInterest()
{
	this->balance *= this->interestRate;
}

Bank::Bank(int c, int a)
{
	this->clients = new Client * [c];
	this->clientsCount = 0;
	this->accounts = new Account * [a];
	this->accountsCount = 0;
}

Bank::~Bank()
{
	for (int i = 0; i < this->clientsCount; i++)
	{
		delete this->clients[i];
	}
	for (int i = 0; i < this->accountsCount; i++)
	{
		delete this->accounts[i];
	}
	delete[] this->clients;
	delete[] this->accounts;
}

Client* Bank::GetClient(int c)
{
	for (int i = 0; i < this->clientsCount; i++)
	{
		if (this->clients[i]->GetCode() == c)
			return this->clients[i];
	}
	return nullptr;
}

Account* Bank::GetAccount(int n)
{
	for (int i = 0; i < this->accountsCount; i++)
	{
		if (this->accounts[i]->GetNumber() == n)
			return this->accounts[i];
	}
	return nullptr;
}

Client* Bank::CreateClient(int c, string n)
{
	Client* newObject = new Client(c, n);
	this->clientsCount += 1;

	return newObject;
}

Account* Bank::CreateAccount(int n, Client* c)
{
	Account* newObject = new Account(n, c);
	this->accountsCount += 1;

	return newObject;
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
	Account* newObject = new Account(n, c, ir);
	this->accountsCount += 1;

	return newObject;
}

Account* Bank::CreateAccount(int n, Client* c, Client* p)
{
	Account* newObject = new Account(n, c, p);
	this->accountsCount += 1;

	return newObject;
}

Account* Bank::CreateAccount(int n, Client* c, Client* p, double ir)
{
	Account* newObject = new Account(n, c, p, ir);
	this->accountsCount += 1;

	return newObject;
}

/*void Bank::AddInterest()
{
	this->accounts[i]AddInterest();
}*/

void main()
{
	Bank* newBank = new Bank(10, 10);

	newBank->CreateClient(1, "Josef Kokot");
	newBank->CreateClient(444, "Josef Kokot");
	newBank->CreateClient(2, "Josef Kokot");

	cout << newBank->GetClient(444)->GetName() << endl;

	return;
}
