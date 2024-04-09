#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    ComplexNumberLibrary::ComplexNumber c1(1, 0);

    cout << "c1: " << c1 << endl;

    ComplexNumberLibrary::ComplexNumber c2(1, 2);

    cout << "c2: " << c2 << endl;

    ComplexNumberLibrary::ComplexNumber c3(1, -2);

    cout << "c3: " << c3 << endl;

    ComplexNumberLibrary::ComplexNumber sum12 = c1 + c2;

    cout << "c1+c2:" << sum12 << endl;

    ComplexNumberLibrary::ComplexNumber sum13 = c1 + c3;

    cout << "c1+c3:" << sum13 << endl;

    ComplexNumberLibrary::ComplexNumber sum23 = c2 + c3;

    cout << "c2+c3:" << sum23 << endl;

    bool t = c1 == c2;
    cout << t << endl;

    bool k = c3 == c3;
    cout << k << endl;

    ComplexNumberLibrary:: ComplexNumber coniugato = conjugate(c2);
    cout << "coniugato di " << c2 << ": " << conjugate(c2) << endl;

    bool j = coniugato == c3;
    cout << j << endl;

     return 0;
}
