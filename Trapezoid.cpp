#include "Trapezoid.h"

void Trapezoid::show()
{
    cout << "Type: " << this->getType() << endl;
    cout << "Side A: " << _sideA << endl;
    cout << "Side B: " << _sideB << endl;
    cout << "Height: " << _height << endl;
}

double Trapezoid::square()
{
    return (_sideA+_sideB)*_height/2;
}
