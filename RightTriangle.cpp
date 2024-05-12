#include "RightTriangle.h"

void RightTriangle::show()
{
    cout << this->getType() << endl;
    cout << "Side A: " << _sideALength << endl;
    cout << "Side B: " << _sideBLength << endl;

}

double RightTriangle::square()
{
    return (_sideALength*_sideBLength)/2;
}
