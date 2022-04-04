#include "Fraction.h"

long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    a %= b;
    return gcd(b, a);
}

void Fraction::update()
{
    long long GCD = gcd(numerator, denominator);
    numerator /= GCD;
    denominator /= GCD;
}

Fraction::~Fraction()
{
    this->numerator = 0;
    this->denominator = -1;
}

Fraction operator+(Fraction fr1, Fraction fr2)
{
    if (fr1.numerator * fr2.denominator + fr1.denominator * fr2.numerator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(fr1.numerator * fr2.denominator + fr1.denominator * fr2.numerator, fr1.denominator * fr2.denominator);
}

Fraction operator+(Fraction fr, long long d)
{
    Fraction temp(d, 1);
    return fr + temp;
}

Fraction operator+(long long d, Fraction fr)
{
    return fr + d;
}

Fraction operator-(Fraction fr1, Fraction fr2)
{
    if (fr1.numerator * fr2.denominator - fr1.denominator * fr2.numerator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(fr1.numerator * fr2.denominator - fr1.denominator * fr2.numerator, fr1.denominator * fr2.denominator);
}

Fraction operator-(Fraction fr, long long d)
{
    return fr + (-d);
}

Fraction operator-(long long d, Fraction fr)
{
    return -fr + d;
}

Fraction Fraction::operator-()
{
    return Fraction(this->numerator, -(this->denominator));
}

Fraction operator*(Fraction fr1, Fraction fr2)
{
    if (fr1.numerator * fr2.numerator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(fr1.numerator * fr2.numerator, fr1.denominator * fr2.denominator);
}

Fraction operator*(long long d, Fraction fr)
{
    Fraction temp = Fraction(d * fr.numerator, fr.denominator);
    return temp;
}

Fraction operator*(Fraction fr, long long d)
{
    return d * fr;
}


Fraction operator/(Fraction fr1, Fraction fr2)
{
    if (fr1.numerator * fr2.denominator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(fr1.numerator * fr2.denominator, fr1.denominator * fr2.numerator);
}

Fraction operator/(long long d, Fraction fr2)
{
    return d * fr2.reverse();
}

Fraction operator/(Fraction fr2, long long d)
{
    return (d / fr2).reverse();
}

bool operator==(Fraction fr1, Fraction fr2)
{
    return ((fr1.numerator == fr2.numerator) && (fr1.denominator == fr2.denominator));
}

bool operator!=(Fraction fr1, Fraction fr2)
{
    return !(fr1 == fr2);
}

bool operator>(Fraction fr1, Fraction fr2)
{
    Fraction temp = fr1 - fr2;
    if ((temp.numerator > 0) && (temp.denominator > 0))
    {
        return true;
    }
    return false;
}

bool operator<(Fraction fr1, Fraction fr2)
{
    Fraction temp = fr1 - fr2;
    if (!(fr1 > fr2) && (temp.numerator != 0))
    {
        return true;
    }
    return false;
}

bool operator>=(Fraction fr1, Fraction fr2)
{
    return !(fr1 < fr2);
}

bool operator<=(Fraction fr1, Fraction fr2)
{
    return !(fr1 > fr2);
}

Fraction Fraction::abs()
{
    return Fraction(std::abs(this->numerator), std::abs(this->denominator));
}

Fraction Fraction::reverse()
{
    return Fraction(this->denominator, this->numerator);
}

Fraction Fraction::power(long long d)
{
    return Fraction(pow((this->numerator), d), pow((this->denominator), d));
}

std::ostream& operator<<(std::ostream& out, Fraction fr)
{
    if (fr.denominator == -1) {
        out << "nope";
        return out;
    }
    out << fr.numerator << '/' << fr.denominator;
    return out;
}
