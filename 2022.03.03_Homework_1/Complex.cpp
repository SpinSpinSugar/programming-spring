#include "Complex.h"

double Complex::sqrabs()
{
	return pow(re, 2) + pow(im, 2);
}

Complex::~Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex& Complex::operator=(Complex& complex)
{
	return complex;
}

double Complex::abs()
{
	return std::sqrt(pow(re, 2) + pow(im, 2));
}

double Complex::arg()
{
	return atan2(im, re);
}

Complex Complex::reverse()
{
	return Complex(re / (pow(re, 2) + pow(im, 2)), -im / (pow(re, 2) + pow(im, 2)));
}

Complex Complex::conj()
{
	return Complex(re, -im);
}

void Complex::root(int n, std::ostream& stream)
{
	std::cout << "|z| * (cos (phi/" << n << ") + i * sin (phi/" << n << ")" << ")";
}

Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.im * complex2.re + complex1.re * complex2.im);
}

Complex operator*(double d, Complex complex)
{
	return Complex(d * complex.re, d * complex.im);
}

Complex operator*(Complex complex, double d)
{
	return Complex(d * complex.re, d * complex.im);
}

Complex operator+(Complex complex1, Complex complex2)
{
	return Complex(complex1.re + complex2.re, complex1.im + complex2.im);
}

Complex operator/(Complex complex, double d)
{
	return Complex(complex.re / d, complex.im / d);
}

Complex operator/(Complex complex1, Complex complex2)
{
	return complex1 * complex2.conj() / complex2.sqrabs();
}

Complex operator-(Complex complex1, Complex complex2)
{
	return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
	stream << '(' << complex.re << ", " << complex.im << ")";
	return stream;
}

double Complex::getRe()
{
	return this->re;
}

void Complex::setRe(double d)
{
	this->re = d;
}

double Complex::getIm()
{
	return this->im;
}

void Complex::setIm(double d)
{
	this->im = d;
}

void Complex::set(double x, double y)
{
	this->re = x;
	this->im = y;
}