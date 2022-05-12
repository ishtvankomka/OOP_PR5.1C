#include "Fraction.hpp"
#include "Fraction_close.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction& Fraction_сlose::operator = (const Fraction& f) {
    set_integer(f.get_integer());
    set_fraction(f.get_fraction());
    return *this;
}

istream& operator >> (istream& in, Fraction_сlose& a)
{
    long int i;
    unsigned short int f;
    cout << " Set the integer "; in >> i;
    cout << " Set the fraction "; in >> f;
    a.set_integer(i);
    a.set_fraction(f);
    return in;
}

ostream& operator << (ostream& out, const Fraction_сlose& a)
{
    out << string(a);
    return out;
}

Fraction_сlose::operator string () const
{
    stringstream a;
    a <<  get_integer() << "." << get_fraction() << endl;
    return a.str();
}

double toNumber(string str)
{
    double number;
    istringstream ( str ) >> number;
    return number;
}

double convertToDouble(Fraction_сlose& a)
{
    return toNumber(string(a));
}

Fraction_сlose toFraction(double n)
{
    stringstream s;
    s << n;

    string str = s.str();
    char* dup = strdup(str.data());

    string integer_a = strtok(dup, ".");
    string fraction_a = strtok(0, "");
    free(dup);
    Fraction_сlose nn;
    long int integer_b;
    istringstream(integer_a) >> integer_b;
    nn.set_integer(integer_b);

    unsigned short int fraction_b;
    istringstream(fraction_a) >> fraction_b;
    nn.set_fraction(fraction_b);

    return nn;
}

Fraction_сlose operator + (Fraction_сlose& a, Fraction_сlose& b)
{
    double a1 = convertToDouble(a);
    double b1 = convertToDouble(b);
    if(a1 == 0)
    {
        throw invalid_argument("invalid_argument: sum of 0 is equal second number!");
    }
    if(b1 == 0)
    {
        throw MyException("MyException: sum of 0 is equal first number!");
    }
    double sum =  a1  + b1;
    return toFraction(sum);
}

Fraction_сlose operator * (Fraction_сlose& a, Fraction_сlose& b)
{
    double a1 = convertToDouble(a);
    double b1 = convertToDouble(b);
    if(a1 == 0)
    {
        throw invalid_argument("invalid_argument: multiplication of 0 is equal 0!");
    }
    if(b1 == 0)
    {
        throw Exception("Exception: multiplication of 0 is equal 0!");
    }
    double sum =  a1  * b1;
    return toFraction(sum);
}
