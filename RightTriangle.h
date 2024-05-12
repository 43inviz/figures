#pragma once
#include "Figure.h"
#include <iostream>


class RightTriangle:public Figure
{
	double _sideALength;
	double _sideBLength;
public:
	RightTriangle() = default;
	RightTriangle(string type,double sideA,double sideB):Figure(type),_sideALength(sideA),_sideBLength(sideB){}

	void show();

	double square();


};

