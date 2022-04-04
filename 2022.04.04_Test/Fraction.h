#pragma once
#include <iostream> 

long long gcd(long long a, long long b);

class Fraction
{
private:
	long long numerator = 0;
	long long denominator = 1;
	void update();
public:
	Fraction() = default;
	Fraction(long long n, long long d) : numerator(n), denominator(d)
	{
		update();
	}

	~Fraction();

	Fraction(const Fraction& fr) = default;

	Fraction& operator=(Fraction& fr) {
		return fr;
	}

	friend Fraction operator+(Fraction fr1, Fraction fr2);
	friend Fraction operator+(Fraction fr, long long d);
	friend Fraction operator+(long long d, Fraction fr);

	friend Fraction operator-(Fraction fr1, Fraction fr2);
	friend Fraction operator-(Fraction fr, long long d);
	friend Fraction operator-(long long d, Fraction fr);
	Fraction operator-();

	friend Fraction operator*(Fraction fr1, Fraction fr2);
	friend Fraction operator*(long long d, Fraction fr);
	friend Fraction operator*(Fraction fr, long long d);

	friend Fraction operator/(Fraction fr1, Fraction fr2);
	friend Fraction operator/(long long d, Fraction fr2);
	friend Fraction operator/(Fraction fr2, long long d);

	friend bool operator==(Fraction fr1, Fraction fr2);
	friend bool operator!=(Fraction fr1, Fraction fr2);
	friend bool operator>(Fraction fr1, Fraction fr2);
	friend bool operator<(Fraction fr1, Fraction fr2);
	friend bool operator>=(Fraction fr1, Fraction fr2);
	friend bool operator<=(Fraction fr1, Fraction fr2);

	Fraction abs();
	Fraction reverse();
	Fraction power(long long d);
	friend std::ostream& operator << (std::ostream& out, Fraction  fr);
};