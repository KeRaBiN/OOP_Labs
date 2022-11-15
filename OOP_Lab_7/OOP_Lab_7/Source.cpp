
#include <iostream>
#include <vector>
#include "EquilateralTriangle.h"
#include "Trapezoid.h"
#include "Triangle.h"

using namespace std;

void main()
{
	vector<GeometricFigure*> objects;
	EquilateralTriangle ETr1(13, 8);
	Trapezoid Trap1(10, 14, 4);
	Triangle Tr1(6, 12, 15);
	objects.push_back(&ETr1);
	objects.push_back(&Trap1);
	objects.push_back(&Tr1);

	for (int i = 0; i < 3; i++)
	{
		cout << objects[i]->getSquare() << endl;
	}
}