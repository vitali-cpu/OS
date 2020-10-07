#pragma once

class complex
{
public:
    double valid;
    double imaginary;

    complex() = default;
    complex(double a,double b);
    int cAbs();

    complex& operator+(complex a);
    complex& operator-(complex b);
    complex& operator*(int c);

}