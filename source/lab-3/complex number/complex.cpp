#include "complex.h"

#include <iostream>

using namespace std;

complex::complex()
{
    real = 0;
    imaginary = 0;
}

complex::complex(double r, double i)
{
    real = r;
    imaginary = i;
}

void complex::setConplexNum(double r, double i)
{
    real = r;
    imaginary = i;
}

complex complex::operator+(complex a)
{
    complex t;
    t.real = real + a.real;
    t.imaginary = imaginary + a.imaginary;
    return t;
}

complex complex::operator-(complex a)
{
    complex t;
    t.real = real - a.real;
    t.imaginary = imaginary - a.imaginary;
    return t;
}

complex complex::operator*(complex a)
{
    complex t;
    t.real = (real*a.real) - (imaginary*a.imaginary);
    t.imaginary = (imaginary*a.real) + (a.imaginary*real);
    return t;
}

bool complex::operator!=(complex a)
{
    if(real == a.real && imaginary == a.imaginary)
        return false;
    else
        return true;
}

void complex::print()
{
    if(imaginary<0)
        cout << real << imaginary << "i" << endl;
    else
        cout << real << "+" << imaginary << "i" << endl;
}