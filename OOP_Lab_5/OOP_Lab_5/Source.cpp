#include "Trapezoid.h"

ostream& operator << (ostream& out, Trapezoid& trapezoid)
{
	out << "\nTrapezoid data:" <<
		"\nFirst foundation - " << trapezoid.getFirstFoundation() <<
		"\nSecond foundation - " << trapezoid.getSecondFoundation() <<
		"\nHeight - " << trapezoid.getHeight() <<
		"\nSquare - " << trapezoid.getSquare() << endl;
	return out;
}

int main()
{
	Trapezoid TR1(10, 5, 8);
	Trapezoid TR2(4, 20, 7);
	Trapezoid TR3;
	
	cout << TR1 << TR2 << TR3;

	TR3 = TR1 + TR2;

	cout << "\n<-------------------------------------------------->" << endl;

	cout << TR1 << TR2 << TR3;

	++TR1;
	TR2++;
	TR3++;

	cout << "\n<-------------------------------------------------->" << endl;

	cout << TR1 << TR2 << TR3;
}