#pragma once

#include "GeometricFigure.h"

class Trapezoid : public GeometricFigure
{
private:

    float Foundation_1;
    float Foundation_2;
    float Height;

public:

    float getSquare();

    void setFoundation1(float foundation_1);
    void setFoundation2(float foundation_2);
    void setHeight(float height);

    float getFoundation1();
    float getFoundation2();
    float getHeight();

    Trapezoid();
    Trapezoid(float foundation_1, float foundation_2, float height);

};

