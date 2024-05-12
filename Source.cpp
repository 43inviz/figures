#include <iostream>
#include "Figure.h"
#include "Circle2.h"
#include "Rectangle2.h"
#include "Trapezoid.h"
#include "RightTriangle.h"

using namespace std;



int main() {

	Rectangle2 rect("rectangle", 10, 5.0);
	Circle2 circle("circle", 5.2);
	Trapezoid trapez("Trapezoid", 2.0, 2.0, 3.0);
	RightTriangle rTr("Right Triangle", 2.0, 3.5);

	const int SIZE = 4;
	Figure* figure[SIZE];

	figure[0] = &rect;
	figure[1] = &circle;
	figure[2] = &trapez;
	figure[3] = &rTr;

	for (int i = 0; i < SIZE; i++) {
		figure[i]->show();
		cout << "Square: " << figure[i]->square() << endl;;
	}


	return 0;
}