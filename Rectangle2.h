#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Rectangle2:public Figure
{
	double _longSide;
	double _shortSide;
public:
	
	Rectangle2() = default;
	Rectangle2(string type,double longSide,double shortSide):Figure(type),_longSide(longSide),_shortSide(shortSide){}


	void show();
	double square();
};

