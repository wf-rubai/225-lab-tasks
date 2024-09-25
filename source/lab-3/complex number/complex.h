#ifndef COMPLEX_H
#define COMPLEX_H

#pragma once

class complex
{
public:
    complex();
    complex(double, double);
    void setConplexNum(double, double);
    complex operator+(complex a);
    complex operator-(complex a);
    complex operator*(complex a);
    bool operator!=(complex a);
    void print();

private:
    double real, imaginary;

};

#endif