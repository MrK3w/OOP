#pragma once
#include "Account.h"
#include "Client.h"
#include <string>
#include "partner.h"

using namespace std;

class Bank
{
public:
	Bank(int c, int a);
	~Bank();
	Client* GetClient(int c);
	Account* GetAccount(int n);

	Client* CreateClient(int c, string n);
	Account* CreateAccount(int n, Client* c);
	Account* CreateAccount(int n, Client* c, double ir);
	PartnerAccount* CreateAccount(int n, Client* c, Client* p);
	PartnerAccount* CreateAccount(int n, Client* c, Client* p, double ir);
	void Print();
	void AddInterest();
private:
	Client** clients;
	int clientsCount;

	Account** accounts;
	int accountsCount;
};

