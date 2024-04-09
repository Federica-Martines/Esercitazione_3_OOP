#include "ComplexNumber.hpp"


namespace ComplexNumberLibrary{


ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if(c.imaginary_part > 0)
        os << c.real_part << "+" << c.imaginary_part << "i" ;
    else if(c.imaginary_part == 0)
        os << c.real_part;
    else if(c.imaginary_part < 0)
        os << c.real_part << c.imaginary_part << "i";

    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real_part + c2.real_part, c1.imaginary_part + c2.imaginary_part);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2) // 1 vero, 0 falso
{
    double tolerance = 0.0001;
    return (fabs(c1.real_part - c2.real_part)) < tolerance && (fabs(c1.imaginary_part - c2.imaginary_part)) < tolerance;
}

//senza utilizzare la tolleranza l'operatore == sarebbe:
//bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
//{
//  return (c1.real_part == c2.real_part) && (c1.imaginary_part == c2.imaginary_part);
//}


ComplexNumber conjugate(const ComplexNumber &c1)
{
    ComplexNumber c(c1.real_part, -c1.imaginary_part);
    return c;
}
}
