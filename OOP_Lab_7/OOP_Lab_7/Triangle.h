#pragma once

#include <math.h>
#include "GeometricFigure.h"

class Triangle : public GeometricFigure
{
private:

    float Side_A;
    float Side_B;
    float Side_C;

public:

    float getSquare();

    void setSideA(float side_a);
    void setSideB(float side_b);
    void setSideC(float side_c);

    float getSideA();
    float getSideB();
    float getSideC();

    Triangle();
    Triangle(float side_a, float side_b, float side_c);

};

