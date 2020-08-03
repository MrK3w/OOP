#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class List
{
private:
	struct node {
		int key;
		node* next;
	};

	typedef struct node* nodePtr;

	nodePtr head;
	nodePtr curr;
	//nodePtr temp;

public: 
	List();
	void addNode(int addData);
	void PrintList();
};
