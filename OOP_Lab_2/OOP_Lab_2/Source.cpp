#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;

class Sphere
{
public:

	friend Sphere frd(Sphere s1, Sphere s2);

	void calculateArea();

	void print_val();

	void setRadius(float r);

	float getRadius();
	float getArea();

	Sphere();
	Sphere(float r);
	~Sphere();

private:

	float radius;
	float volume = 0;

};

Sphere::Sphere()
{
	cout << "Object was constructed with default values." << endl << endl;
	radius = 0;
}

Sphere::Sphere(float r)
{
	cout << "Object was constructed with entered values." << endl << endl;
	radius = r;
}

Sphere::~Sphere()
{
	cout << "Object was destructed." << endl;
}

void Sphere::calculateArea()
{
	volume = ((float)4 / 3) * pow(radius, 3) * M_PI;
}

void Sphere::print_val()
{
	cout << " Radius = " << radius << endl;
	cout << " Volume = " << volume << endl << endl;
}

void Sphere::setRadius(float r)
{
	radius = r;
}

float Sphere::getRadius()
{
	return radius;
}

float Sphere::getArea()
{
	return volume;
}

void main()
{
	Sphere s1;

	s1.calculateArea();
	s1.print_val();

	Sphere s2(8);

	s2.calculateArea();
	s2.print_val();

	Sphere s3(5);

	s3.calculateArea();
	s3.print_val();

	Sphere s4 = frd(s2, s3);

	cout << "\nNew sphere:" << endl;
	s4.print_val();

	system("pause");
}

Sphere frd(Sphere s1, Sphere s2)
{
	Sphere s;
	s.volume = s1.volume + s2.volume;
	s.radius = pow((3 * s.volume) / (4 * M_PI), (float)1 / 3);
	return s;
}
