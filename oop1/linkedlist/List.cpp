#include "List.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

List::List()
{
	head = NULL;
	curr = NULL;
	//temp = NULL;
}

void List::addNode(int addData)
{
	nodePtr n = new node;
	n->next = nullptr;
	n->key = addData;

	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

void List::PrintList()
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->key << " ";
		curr = curr->next;
	}
}


int main()
{
	List prvni;


	for (int i = 1; i <= 20; i++)
	{
		prvni.addNode(i);
	}

	prvni.PrintList();

	return 0;
}