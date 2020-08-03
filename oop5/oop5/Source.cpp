#include <iostream>
#include "Account.h"
#include "Bank.h"

using namespace std;


int main()
{
	Bank* banka = new Bank(10, 10);
	Client* c, *c1, *c2, *c3;
	c = banka->CreateClient(1, "Jakub Pietrus");
	c1 =banka->CreateClient(2, "Michal Pietrus");
	c2 = banka->CreateClient(3, "Robo adik");
	c3 = banka->CreateClient(4, "Lojza Alojza");
	
	banka->CreateAccount(0001, c);
	banka->CreateAccount(0005, c1, 1.5);
	banka->CreateAccount(0156, c3,c2);

	banka->GetAccount(0001)->Deposit(500);
	
	banka->GetAccount(0005)->Deposit(5000);
	banka->GetAccount(0156)->Deposit(10000);
	
	Account::SetInterestRate(2);
	banka->Print();


	cout << "*************************************************" << endl << "Po odecteni:" << endl;

	banka->GetAccount(0001)->WithDraw(600);
	banka->GetAccount(0005)->WithDraw(500);
	banka->GetAccount(0156)->WithDraw(500);
	Account::SetInterestRate(2.5);
	banka->AddInterest();
	banka->Print();
	
	puts("");
	cout << "Pocet clientu je: " << Client::GetObjectsCount() << endl;
	cout << "Pocet uctu je: " << Account::GetObjectsCount() << endl;
	delete banka;
	cout << "*******************" << endl << "Po smazani:" << endl;
	cout << "pocet klientu:" << Client::GetObjectsCount() << endl;
	cout << "pocet uctu:" << Account::GetObjectsCount() << endl;

	system("pause");
	return 0;
}



