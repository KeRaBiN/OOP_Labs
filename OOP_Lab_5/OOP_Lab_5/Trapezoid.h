#pragma once

#include <iostream>

using namespace std;

class Trapezoid
{
private:

	float Foundation_1, Foundation_2, Height;
	float Square;

public:


	void calcScuare();

	void setFirstFoundation(float foundation_1);
	void setSecondFoundation(float foundation_2);
	void setHeight(float height);

	float getFirstFoundation();
	float getSecondFoundation();
	float getHeight();
	float getSquare();

	Trapezoid operator + (Trapezoid& other);
	void operator ++();
	void operator ++(int);

	Trapezoid();
	Trapezoid(float foundation_1, float foundation_2, float height);

};