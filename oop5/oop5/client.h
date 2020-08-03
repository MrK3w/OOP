#pragma once
#include <string>

using namespace std;
class Client
{
public:
	Client(int code, string name);
	~Client();
	static int GetObjectsCount();
	string GetName();
	int GetCode();
	void Print1();
private:
	static int objectsCount;
	int code;
	string name;
};

