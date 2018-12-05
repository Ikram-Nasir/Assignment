#pragma once
#include <iostream>

using namespace std;

class complex
{
public:
	double R;
	double Im;
	complex *linker;
	complex(double, double);
	complex operator+(complex);
	complex operator-(complex C1);
	complex operator*(complex C1);
	complex operator/(complex C1);


};

