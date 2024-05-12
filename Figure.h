#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure
{
	string _type;
public:
	Figure() = default;
	Figure(string type):_type(type){}

	virtual double square() = 0;
	virtual void show() = 0;
	

	void setType(string type) {
		_type = type;
	}

	string getType() const {
		return _type ;
	}


};

