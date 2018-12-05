#include <iostream>
#include "linklist.h"
#include "complex.h"

using namespace std;

int main()
{
	complex C1(4, 5), C2(3, -3), C3(4, 3), C4(0, 0);

	linklist object;

	object.insertatstart(C1.R, C1.Im);
	object.insertatend(C2.R, C2.Im);
	object.insertatend(C3.R, C3.Im);

	C4 = C1 + C2;
	object.insertatend(C4.R, C4.Im);
	cout << "Addition of two complex numbers:(Add 1 & 2 and place result at end)" << endl;
	object.traverse();
	cout << endl;

	C4 = C1 - C3;
	object.insertatend(C4.R, C4.Im);
	cout << "Subtraction of two complex numbers:(Subtract 1 & 3 and place result at end)" << endl;
	object.traverse();
	cout << endl;

	C4 = C2 * C3;
	object.insertatend(C4.R, C4.Im);
	cout << "Multiplication of two complex numbers:(Multiply 2 & 3 and place result at end)" << endl;
	object.traverse();
	cout << endl;


	C4 = C1 / C3;
	
	object.delete_at_mid(4);
	object.insertatend(C4.R, C4.Im);
	cout << "Division of two complex numbers and Delete at position:(Divide 1 & 3 and place result at end, also delete the element at 4)" << endl;
	object.traverse();

	system("pause");

}