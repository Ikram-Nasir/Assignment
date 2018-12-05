#include <iostream>
#include "linklist.h"
#include"complex.h"


using namespace std;




linklist::linklist() { head = NULL; }

void linklist::insertatstart(double a, double b)
{
	complex *ptr = new complex(0, 0);
	ptr->R = a;
	ptr->Im = b;
	ptr->linker = head;
	head = ptr;


}

void linklist::insertatend(double a, double b)
{
	complex *ptr = new complex(0, 0);
	ptr->R = a;
	ptr->Im = b;
	ptr->linker = NULL;
	complex *temp;
	temp = head;
	while (temp->linker != NULL) {
		temp = temp->linker;
	}
	temp->linker = ptr;



}

void linklist::insert_at_mid(double a, double b, int x)
{

	complex *ptr = new complex(0, 0);
	ptr->R = a;
	ptr->Im = b;

	complex *current;
	complex *previous = NULL;
	current = head;

	for (int i = 1; i < x; i++) {

		previous = current;
		current = current->linker;
	}

	ptr->linker = current;
	previous->linker = ptr;


}


void linklist::delete_at_mid(int x)
{


	complex *current;
	complex *previous = NULL;
	current = head;

	for (int i = 1; i < x; i++)
	{

		previous = current;
		current = current->linker;
	}

	complex* temp = current->linker;
	delete current;
	previous->linker = temp;
	current = NULL;


}


void linklist::traverse()
{
	complex *temp;
	temp = head;
	while (temp != NULL)
	{
		cout << "(" << temp->R << "," << temp->Im << ")" << endl;
		temp = temp->linker;
	}
}