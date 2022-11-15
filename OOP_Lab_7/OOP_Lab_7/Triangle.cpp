#include "Triangle.h"

float Triangle::getSquare()
{
    float p = (Side_A + Side_B + Side_C) / 2;
    return sqrt((p * (p - Side_A)) * ((p - Side_B) * (p - Side_C)));
}

void Triangle::setSideA(float side_a)
{
    Side_A = side_a;
}

void Triangle::setSideB(float side_b)
{
    Side_B = side_b;
}

void Triangle::setSideC(float side_c)
{
    Side_C = side_c;
}


float Triangle::getSideA()
{
    return Side_A;
}

float Triangle::getSideB()
{
    return Side_B;
}

float Triangle::getSideC()
{
    return Side_C;
}

Triangle::Triangle()
{
    Side_A = 0;
    Side_B = 0;
    Side_C = 0;
}

Triangle::Triangle(float side_a, float side_b, float side_c)
{
    Side_A = side_a;
    Side_B = side_b;
    Side_C = side_c;
}