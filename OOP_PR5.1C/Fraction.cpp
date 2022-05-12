#include "Fraction.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction::Fraction()
    : integer(), fraction()
{}

Fraction::Fraction(int i, int f)
{
    if (f < 0)
    {
        throw invalid_argument("invalid_argument: The value less than 0!");
    }
    set_integer((long)i);
    set_fraction((unsigned short)f);
}

istream& operator >> (istream& in, Fraction& a)
{
    int f, s;
    cout << " Set the integer "; cin >> f;
    cout << " Set the fraction "; cin >> s;
    if (s < 0)
    {
        throw MyException("MyException: The value less than 0!");
    }
    a.set_integer((long)f);
    a.set_fraction((unsigned short)s);
    return in;
}

void Fraction::set_fraction(int f)
{
    if (f < 0)
    {
        throw Exception("Exception: The value less than 0!");
    }
    else
    {
        fraction = f;
    }
};

Fraction::Fraction(const Fraction& f)
{
    *this = f;
}

Fraction& Fraction::operator = (const Fraction& f) {
    integer = f.integer;
    fraction = f.fraction;
    return *this;
}



ostream& operator << (ostream& out, const Fraction& a)
{
    out << string(a);
    return out;
}

Fraction::operator string () const
{
    stringstream a;
    a <<  integer << "." << fraction << endl;
    return a.str();
}

void Read(Fraction& a)
{
    cout << "Set the number:" << endl; cin >> a;
}

void Display(Fraction& a)
{
    cout << a;
}
