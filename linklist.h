#pragma once
#include "iostream"
#include"complex.h"

using namespace std;

class linklist
{
private:
	complex *head;

public:
	linklist();
	void insertatstart(double, double);
	void insertatend(double, double);
	void insert_at_mid(double, double, int);
	void delete_at_mid(int);
	void traverse();
};

