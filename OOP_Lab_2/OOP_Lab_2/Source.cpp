#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;

class sphere
{
public:

	friend sphere frd(sphere s1, sphere s2);

	void CalculateArea();

	void print_val();

	void setRadius(float r);

	float getRadius();
	float getArea();

	sphere();
	sphere(float r);
	~sphere();

private:

	float R;
	float V = 0;

};

sphere::sphere()
{
	cout << "Object was constructed with default values." << endl << endl;
	R = 0;
}

sphere::sphere(float r)
{
	cout << "Object was constructed with entered values." << endl << endl;
	R = r;
}

sphere::~sphere()
{
	cout << "Object was destructed." << endl;
}

void sphere::CalculateArea()
{
	V = ((float)4 / 3) * pow(R, 3) * M_PI;
}

void sphere::print_val()
{
	cout << " Radius = " << R << endl;
	cout << " Area = " << V << endl << endl;
}

void sphere::setRadius(float r)
{
	R = r;
}

float sphere::getRadius()
{
	return R;
}

float sphere::getArea()
{
	return V;
}

void main()
{
	sphere s1;

	s1.CalculateArea();
	s1.print_val();

	sphere s2(8);

	s2.CalculateArea();
	s2.print_val();

	sphere s3(5);

	s3.CalculateArea();
	s3.print_val();

	sphere s4 = frd(s2, s3);

	cout << "\nNew sphere:" << endl;
	s4.print_val();

	system("pause");
}

sphere frd(sphere s1, sphere s2)
{
	sphere s;
	s.V = s1.V + s2.V;
	s.R = pow((3 * s.V) / (4 * M_PI), (float)1 / 3);
	return s;
}
