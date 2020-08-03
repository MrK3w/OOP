#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class KeyValue
{
private:
	string key;
	KeyValue* next;

public:
	KeyValue(string k);
	~KeyValue();
	string GetKey();
	KeyValue* GetNext();
	KeyValue* CreateNext(string k);
};

string KeyValue::GetKey()
{
	return this->key;
}

KeyValue::KeyValue(string k) {
	this->key = k;
	this->next = nullptr;
}

KeyValue::~KeyValue() {
	if (this->next != nullptr) {
		delete this->next;
		this->next = nullptr;
	}
}

KeyValue* KeyValue::GetNext() {
	return this->next;
}

KeyValue* KeyValue::CreateNext(string k) {
	this->next = new KeyValue(k);
	return this->next;
}

int main()
{
	KeyValue* kv1 = new KeyValue("Pes");
	kv1->CreateNext("Kocur")->CreateNext("Krecek");
	KeyValue* kv2 = new KeyValue("Hroch");
	kv2->CreateNext("Lev");

	cout << kv1->GetKey() << endl << kv1->GetNext()->GetKey() << endl << kv1->GetNext()->GetNext()->GetKey() << endl;
	cout << kv2->GetKey() << endl << kv2->GetNext()->GetKey() << endl;

	delete kv1;
	delete kv2;


	return 0;
}