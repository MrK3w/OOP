#pragma once
#include <iostream>
#include "account.h"
using namespace std;

class PartnerAccount : public Account
{
private:
	Client* partner;
public:
	Client* GetPartner();
	PartnerAccount(int n, Client* c, Client* p, double ir);
	PartnerAccount(int n, Client* c, Client* p);
	void Print();
};