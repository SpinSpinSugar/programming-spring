#pragma once
#include<iostream>
#include<cmath>

class Complex
{
private:
	double re;
	double im;
	double sqrabs();
public:
	Complex(double re = 0, double im = 0) :re(re), im(im) {}
	Complex(const Complex& complex) : re(complex.re), im(complex.im) {}
	~Complex();
	Complex& operator=(Complex& complex);
	double abs();
	double arg();
	Complex reverse();
	Complex conj();
	double getRe();
	void setRe(double d);
	double getIm();
	void setIm(double d);
	void set(double x, double y);
	void root(int n, std::ostream& stream); //туплю и не понимаю чо надо сделать
	friend Complex operator*(Complex complex1, Complex complex2);
	friend Complex operator*(double d, Complex complex);
	friend Complex operator*(Complex complex, double d);
	friend Complex operator+(Complex complex1, Complex complex2);
	friend Complex operator/(Complex complex, double d);
	friend Complex operator/(Complex complex1, Complex complex2);
	friend Complex operator-(Complex complex1, Complex complex2);
	friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};
