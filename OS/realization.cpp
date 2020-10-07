#include "complex.h"
#include <iostream>
#include <cmath>
#include <algorithm>

complex::complex()
{
	valid = 0;
	imaginary = 0;
}

complex::complex(double a, double b)
{
	valid = a;
	imaginary = b;
}

int complex::cAbs()
{
	return sqrt(valid * valid + imaginary * imaginary);
}

complex& complex::operator+(complex a)
{
	valid += a.valid;
	imaginary += a.imaginary;

	return *this;
}

complex& complex::operator-(complex operand)
{
	valid -= operand.valid;
	imaginary -= operand.imaginary;

	return *this;
}

complex& complex::operator*(int a)
{
	valid *= a;
	imaginary *= a;

	return *this;
}