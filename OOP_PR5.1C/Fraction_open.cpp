#include "Fraction_open.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction& Fraction_open::operator = (const Fraction& f) {
    set_integer(f.get_integer());
    set_fraction(f.get_fraction());
    return *this;
}

void Read(Fraction_open& a)
{
    cout << "Set the number:" << endl; cin >> a;
}

void Display(Fraction_open& a)
{
    cout << a;
}

double toNumber(string str)
{
    double number;
    istringstream ( str ) >> number;
    return number;
}

double convertToDouble(Fraction& a)
{
    return toNumber(string(a));
}

Fraction_open toFraction(double n)
{
    stringstream s;
    s << n;

    string str = s.str();
    char* dup = strdup(str.data());

    string integer_a = strtok(dup, ".");
    string fraction_a = strtok(0, "");
    free(dup);
    Fraction_open nn;
    long int integer_b;
    istringstream(integer_a) >> integer_b;
    nn.set_integer(integer_b);

    unsigned short int fraction_b;
    istringstream(fraction_a) >> fraction_b;
    nn.set_fraction(fraction_b);

    return nn;
}

Fraction operator + (Fraction& a, Fraction& b)
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

Fraction operator * (Fraction& a, Fraction& b)
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
