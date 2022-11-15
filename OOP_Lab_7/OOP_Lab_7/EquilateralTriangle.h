#pragma once

#include "GeometricFigure.h"

class EquilateralTriangle : public GeometricFigure
{
private:

    float Side;
    float Height;

public:

	float getSquare();

    void setSide(float side);
    void setHeight(float height);

    float getSide();
    float getHeight();

    EquilateralTriangle();
    EquilateralTriangle(float side, float height);
};

