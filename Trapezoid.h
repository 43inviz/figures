#pragma once
#include "Figure.h"
#include <iostream>

class Trapezoid:public Figure
{
	double _sideA;
	double _sideB;
	double _height;
public:

	Trapezoid() = default;
	Trapezoid(string type,double sideA,double sideB,double height):Figure(type),_sideA(sideA),_sideB(sideB),_height(height){}

	void show();

	double square();
};

