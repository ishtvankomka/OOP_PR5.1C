#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"Fraction.hpp"

using namespace std;

class Fraction_open : public Fraction
{
public:
    Fraction& operator = (const Fraction&);

    friend Fraction operator + (Fraction&, Fraction&);
    friend Fraction operator * (Fraction&, Fraction&);

    friend void Read(Fraction_open&);
    friend void Display(Fraction_open&);

    friend Fraction_open toFraction(double);
    friend double convertToDouble(Fraction&);
    friend double toNumber(string);
};
