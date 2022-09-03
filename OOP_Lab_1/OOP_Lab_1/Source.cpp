#include<iostream>

using namespace std;

class trapezoid
{
public:

	void CalculateArea();

	void print_sqrt();

	void setFirstFoundation(float f1);
	void setSecondFoundation(float f2);
	void setHeight(float h);

	float getFirstFoundation();
	float getSecondFoundation();
	float getHeight();
	float getArea();

	trapezoid();
	trapezoid(float f1, float f2, float h);
	~trapezoid();

private:

	float F1, F2, H;
	float S = 0;
};

trapezoid::trapezoid()
{
	cout << "Object was constructed with default values." << endl << endl;
	F1 = 0;
	F2 = 0;
	H = 0;
}

trapezoid::trapezoid(float f1, float f2, float h)
{
	cout << "Object was constructed with entered values." << endl << endl;
	F1 = f1;
	F2 = f2;
	H = h;
}

trapezoid::~trapezoid()
{
	cout << "Object was destructed." << endl;
}

void trapezoid::CalculateArea()
{
	S = 0.5 * H * (F1 + F2);
}

void trapezoid::print_sqrt()
{
	cout << " Foundatin_1 = " << F1 << endl;
	cout << " Foundatin_2 = " << F2 << endl;
	cout << " Height = " << H << endl;
	cout << " Area = " << S << endl << endl;
}

void trapezoid::setFirstFoundation(float f1)
{
	F1 = f1;
}

void trapezoid::setSecondFoundation(float f2)
{
	F2 = f2;
}

void trapezoid::setHeight(float h)
{
	H = h;
}

float trapezoid::getFirstFoundation()
{
	return F1;
}

float trapezoid::getSecondFoundation()
{
	return F2;
}

float trapezoid::getHeight()
{
	return H;
}

float trapezoid::getArea()
{
	return S;
}

void main()
{
	trapezoid tr1;

	tr1.CalculateArea();
	tr1.print_sqrt();

	trapezoid tr2(15, 5, 6);

	tr2.CalculateArea();
	tr2.print_sqrt();

	system("pause");
}