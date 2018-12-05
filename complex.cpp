#include <iostream>	
#include "complex.h"

using namespace std;





complex::complex(double Ri, double Iml)
{
	R = Ri;
	Im = Iml;

}

complex complex::operator+(complex C1)

{
	complex C3(0, 0);
	C3.R = this->R + C1.R;
	C3.Im = this->Im + C1.Im;
	return C3;


}

complex complex::operator -(complex C1)
{
	complex C3(0, 0);

	C3.R = this->R - C1.R;
	C3.Im = this->Im - C1.Im;
	return C3;
}

complex complex::operator *(complex C1)
{
	complex C3(0, 0);
	C3.R = this->R * C1.R - this->Im * C1.Im;
	C3.Im = this->R * C1.Im + this->Im * C1.R;
	return C3;
}

complex complex::operator /(complex C1)
{
	complex C3(0, 0);
	try
	{
		if ((C1.R == 0) || (C1.Im == 0))
		{
			throw(0);
		}
		C3.R = (this->R * C1.R + this->Im * C1.Im) / (C1.R * C1.R + C1.Im *C1.Im);
		C3.Im = (this->Im * C1.R - this->R* C1.Im) / (C1.R * C1.R + C1.Im *C1.Im);
	}

	catch (int)
	{
		cout << "Can't divide: Invalid denominator" << endl;
	}

	return C3;
}
