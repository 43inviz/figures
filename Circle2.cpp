#include "Circle2.h"

void Circle2::show()
{
	cout << "Type: " << this->getType() << endl;
	cout << "Radius: " << _raduis << endl;
}

double Circle2::square()
{
	const double PI = 3.14;
	return PI*(_raduis*_raduis);
}
