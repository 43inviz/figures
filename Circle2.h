#pragma once
#include "Figure.h"
#include <iostream>

class Circle2:public Figure
{
	
	double _raduis;
public:
	Circle2() = default;
	Circle2(string type,double radius):Figure(type),_raduis(radius){}

	void show();
	
	double square();
};

