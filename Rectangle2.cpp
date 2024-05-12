#include "Rectangle2.h"

void Rectangle2::show()
{
    cout << "Type: " << this->getType() << endl;
    cout << "Short side: " << _shortSide << endl;
    cout << "Long side: " << _longSide << endl;
}

double Rectangle2::square()
{

    return _longSide * _shortSide;
}
