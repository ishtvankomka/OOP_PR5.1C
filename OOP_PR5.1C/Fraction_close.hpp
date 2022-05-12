#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"Fraction.hpp"
using namespace std;

class Fraction_сlose : private Fraction
{
public:
    Fraction& operator = (const Fraction&);
    
    operator string() const;
    friend ostream& operator << (ostream&, const Fraction_сlose&);
    friend istream& operator >> (istream&, Fraction_сlose&);
        
    friend Fraction_сlose operator + (Fraction_сlose&, Fraction_сlose&);
    friend Fraction_сlose operator * (Fraction_сlose&, Fraction_сlose&);

    friend Fraction_сlose toFraction(double);
    friend double convertToDouble(Fraction_сlose&);
    friend double toNumber(string);
};
