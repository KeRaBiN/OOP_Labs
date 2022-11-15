#include "Trapezoid.h"

float Trapezoid::getSquare()
{
    return ((Foundation_1 + Foundation_2) / 2) * Height;
}

void Trapezoid::setFoundation1(float foundation_1)
{
    Foundation_1 = foundation_1;
}

void Trapezoid::setFoundation2(float foundation_2)
{
    Foundation_2 = foundation_2;
}

void Trapezoid::setHeight(float height)
{
    Height = height;
}


float Trapezoid::getFoundation1()
{
    return Foundation_1;
}

float Trapezoid::getFoundation2()
{
    return Foundation_2;
}

float Trapezoid::getHeight()
{
    return Height;
}

Trapezoid::Trapezoid()
{
    Foundation_1 = 0;
    Foundation_2 = 0;
    Height = 0;
}

Trapezoid::Trapezoid(float foundation_1, float foundation_2, float height)
{
    Foundation_1 = foundation_1;
    Foundation_2 = foundation_2;
    Height = height;
}
