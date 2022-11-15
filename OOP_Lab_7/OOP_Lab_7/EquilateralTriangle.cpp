#include "EquilateralTriangle.h"

float EquilateralTriangle::getSquare()
{
    return (Side * Height) / 2;
}

void EquilateralTriangle::setSide(float side)
{
    Side = side;
}

void EquilateralTriangle::setHeight(float height)
{
    Height = height;
}


float EquilateralTriangle::getSide()
{
    return Side;
}

float EquilateralTriangle::getHeight()
{
    return Height;
}

EquilateralTriangle::EquilateralTriangle()
{
    Side = 0;
    Height = 0;
}

EquilateralTriangle::EquilateralTriangle(float side, float height)
{
    Side = side;
    Height = height;
}
