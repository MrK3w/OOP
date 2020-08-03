#include "partner.h"

PartnerAccount::PartnerAccount(int n, Client* c, Client* p) :Account(n, c)
{
	partner = p;
}
PartnerAccount::PartnerAccount(int n, Client* c, Client* p, double ir) : Account(n, c, ir)
{
	partner = p;
}

Client* PartnerAccount::GetPartner()
{
	return partner;
}

void PartnerAccount::Print()
{
	{
		cout << GetNumber() << "> Majitel uctu: [";
		GetOwner()->Print1();
		cout << "Jeho Partner ";
		GetPartner()->Print1();
		cout << "] Na ucte: " << GetBalance() << " Urok:" << GetInterestRate();

	}
}