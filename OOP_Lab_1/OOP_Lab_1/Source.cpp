#include<iostream>

using namespace std;

class Trapezoid
{
public:

	void calculateArea();

	void print_sqrt();

	void setFirstFoundation(float f1);
	void setSecondFoundation(float f2);
	void setHeight(float h);

	float getFirstFoundation();
	float getSecondFoundation();
	float getHeight();
	float getArea();

	Trapezoid();
	Trapezoid(float f1, float f2, float h);
	~Trapezoid();

private:

	float foundation_1, foundation_2, height;
	float square = 0;
};

Trapezoid::Trapezoid()
{
	cout << "Object was constructed with default values." << endl << endl;
	foundation_1 = 0;
	foundation_2 = 0;
	height = 0;
}

Trapezoid::Trapezoid(float f1, float f2, float h)
{
	cout << "Object was constructed with entered values." << endl << endl;
	foundation_1 = f1;
	foundation_2 = f2;
	height = h;
}

Trapezoid::~Trapezoid()
{
	cout << "Object was destructed." << endl;
}

void Trapezoid::calculateArea()
{
	square = 0.5 * height * (foundation_1 + foundation_2);
}

void Trapezoid::print_sqrt()
{
	cout << " Foundatin_1 = " << foundation_1 << endl;
	cout << " Foundatin_2 = " << foundation_2 << endl;
	cout << " Height = " << height << endl;
	cout << " Square = " << square << endl << endl;
}

void Trapezoid::setFirstFoundation(float f1)
{
	foundation_1 = f1;
}

void Trapezoid::setSecondFoundation(float f2)
{
	foundation_2 = f2;
}

void Trapezoid::setHeight(float h)
{
	height = h;
}

float Trapezoid::getFirstFoundation()
{
	return foundation_1;
}

float Trapezoid::getSecondFoundation()
{
	return foundation_2;
}

float Trapezoid::getHeight()
{
	return height;
}

float Trapezoid::getArea()
{
	return square;
}

void main()
{
	Trapezoid tr1;

	tr1.calculateArea();
	tr1.print_sqrt();

	Trapezoid tr2(15, 5, 6);

	tr2.calculateArea();
	tr2.print_sqrt();

	system("pause");
}