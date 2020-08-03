#pragma once
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Student
{
private:
	string name;
	string code;
public:
	Student(string n, string c);
	string GetName();
	string GetCode();
};

