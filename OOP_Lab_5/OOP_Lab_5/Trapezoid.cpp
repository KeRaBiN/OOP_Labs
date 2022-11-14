#include "Trapezoid.h"

void Trapezoid::calcScuare()
{
	Square = ((Foundation_1 + Foundation_2) / 2) * Height;
}

void Trapezoid::setFirstFoundation(float foundation_1)
{
	Foundation_1 = foundation_1;
}

void Trapezoid::setSecondFoundation(float foundation_2)
{
	Foundation_2 = foundation_2;
}

void Trapezoid::setHeight(float height)
{
	Height = height;
}

float Trapezoid::getFirstFoundation()
{
	return Foundation_1;
}

float Trapezoid::getSecondFoundation()
{
	return Foundation_2;
}

float Trapezoid::getHeight()
{
	return Height;
}

float Trapezoid::getSquare()
{
	return Square;
}

Trapezoid Trapezoid::operator+(Trapezoid& other)
{
	return Trapezoid(this->Foundation_1 + other.Foundation_1,
		this->Foundation_2 + other.Foundation_2,
		this->Height + other.Height);
}

void Trapezoid::operator++()
{
	this->Foundation_1++;
	this->Foundation_2++;
	this->Height++;
	this->calcScuare();
}

void Trapezoid::operator++(int)
{
	this->Foundation_1++;
	this->Foundation_2++;
	this->Height++;
	this->calcScuare();
}

Trapezoid::Trapezoid()
{
	Foundation_1 = 0;
	Foundation_2 = 0;
	Height = 0;
	Square = 0;
}

Trapezoid::Trapezoid(float foundation_1, float foundation_2, float height)
{
	Foundation_1 = foundation_1;
	Foundation_2 = foundation_2;
	Height = height;
	calcScuare();
}

