#include "complex.h"


void complex::setVariable_re(int value)
{
    re = value;
}

void complex::setVariable_im(int value)
{
    im = value;
}


int complex::getVariable_re()
{
    return re;
}

int complex::getVariable_im()
{
    return im;
}

//
//ostream& complex::operator<<(ostream& out)
//{
//	out << "(" << re << ", " << im << ")";
//	return out;
//}

complex::complex()
{
    re = 0;
    im = 0;
}

complex::complex(int value_1, int value_2)
{
    re = value_1;
    im = value_2;
}
