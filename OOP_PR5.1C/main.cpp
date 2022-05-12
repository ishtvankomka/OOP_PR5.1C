#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include "Fraction.hpp"
#include "Fraction_open.hpp"
//#include "Fraction_close.hpp"

using namespace std;

int main() {
    try
    {
        Fraction_open n1;
        Read(n1);
        cout << "The number is ";
        Display(n1);

        Fraction_open n2;
        Read(n2);
        cout << "The number is ";
        Display(n2);

        Fraction_open nsum;
        nsum = n1 + n2;
        cout << " Sum: ";
        Display(nsum);
    }
    catch (MyException* e)
    {
        cerr << e->What() << endl;
    }
    catch (MyException& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        Fraction_open n1;
        Read(n1);
        cout << "The number is ";
        Display(n1);

        Fraction_open n2;
        Read(n2);
        cout << "The number is ";
        Display(n2);

        Fraction_open nmultiplication;
        nmultiplication = n1 * n2;
        cout << " Multiplication: ";
        Display(nmultiplication);
    }
    catch (Exception* e)
    {
        cerr << e->What() << endl;
    }
    catch (Exception& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }
    
    /*
    try
    {
        Fraction_сlose n1;
        cout << "Set the number:" << endl;
        cin >> n1;
        cout << "The number is ";
        cout << n1;

        Fraction_сlose n2;
        cout << "Set the number:" << endl;
        cin >> n2;
        cout << "The number is ";
        cout << n2;

        Fraction_сlose nsum;
        nsum = n1 + n2;
        cout << " Sum: ";
        cout << nsum;
    }
    catch (MyException* e)
    {
        cerr << e->What() << endl;
    }
    catch (MyException& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        Fraction_сlose n1;
        cout << "Set the number:" << endl;
        cin >> n1;
        cout << "The number is ";
        cout << n1;

        Fraction_сlose n2;
        cout << "Set the number:" << endl;
        cin >> n2;
        cout << "The number is ";
        cout << n2;

        Fraction_сlose nmultiplication;
        nmultiplication = n1 * n2;
        cout << " Multiplication: ";
        cout << nmultiplication;
    }
    catch (Exception* e)
    {
        cerr << e->What() << endl;
    }
    catch (Exception& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }
    */
    return 0;
}


