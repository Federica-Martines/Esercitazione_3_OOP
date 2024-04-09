#ifndef __COMPLEXNUMBER_HPP
#define __COMPLEXNUMBER_HPP

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{

    double real_part;
    double imaginary_part;

    ComplexNumber(double a, double b):
        real_part(a),imaginary_part(b) {}


    ComplexNumber() = default;

};

ostream& operator<<(ostream& os, const ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);

ComplexNumber conjugate(const ComplexNumber &c1);

}
#endif


