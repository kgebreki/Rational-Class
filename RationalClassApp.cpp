#include <iostream>
#include "RationalClass.h"
using namespace std;

/*
 * Kaleb Gebrekirstos
 * CS 255 03/28/19
 * The aim of this assignment is to explore the wonderful overloading properties C++ has to offer. Through the
 * implementation of the rational class, several arithmetic and logical operators such as (+, -, /, !, <=, etc)
 * have been overloaded to operate on rational numbers.
 */
//Driver class
int main() {
    Rational a, b, c;
    int n, d;
    bool flag = false;
    char test = ' ';
    do{
        cout << "Please enter the numerator and denominator separated by a space: " << endl;
        cin >> n >> d;
        cout << "Finished grabbing input and storing in a variable: " << n << "/" << d << endl;
        a.setValue(n,d);
        cout << "Please enter the second rational number: " << endl;
        cin >> n >> d;
        cout << "Finished grabbing input and storing in a variable: " << n << "/" << d << endl;
        b.setValue(n,d);
        cout << "Some arithmetic operations... " << endl;
        //int sum
        c = a + b;
        a.print();
        cout << " + ";
        b.print();
        cout << " = ";
        c.print();
        cout << endl;
        //int subtraction
        c = a - b;
        a.print();
        cout << " - ";
        b.print();
        cout << " = ";
        c.print();
        cout << endl;
        //int multiplication
        c = a * b;
        a.print();
        cout << " * ";
        b.print();
        cout << " = ";
        c.print();
        cout << endl;
        //int division
        c = a / b;
        a.print();
        cout << " / ";
        b.print();
        cout << " = ";
        c.print();
        cout << endl;
        //c=(a+b)/(a-b)
        c = (a + b) / (a - b);
        cout << "(";
        a.print();
        cout << " + ";
        b.print();
        cout <<") / (";
        a.print();
        cout << " - ";
        b.print();
        cout << ") = ";
        c.print();
        cout << endl;
        if ( a > b){
            a.print();
            cout << " is greater than ";
            b.print();
            cout << endl;
        }
        else if ( a <= b){
            a.print();
            cout << " is less than or equal to ";
            b.print();
            cout << endl;
        }
        if ( a < b){
            a.print();
            cout << " is less than ";
            b.print();
            cout << endl;
        }
        else if ( a >= b){
            a.print();
            cout << " is greater than or equal to ";
            b.print();
            cout << endl;
        }
        if ( a == b){
            a.print();
            cout << " is equal to ";
            b.print();
            cout << endl;
        }
        else if ( a != b){
            a.print();
            cout << " is not equal to ";
            b.print();
            cout << endl;
        }
        a.print();
        cout << " negated is ";
        a = -a;
        a.print();
        cout << endl;
        cout << "The reciprocal of ";
        b.print();
        cout << " is ";
        b = !b;
        b.print();
        cout << endl;
        cout << "Would you like to enter new rational numbers? (Y/N)" << endl;
        cin >> test;
        if (test == 'N' || test == 'n')
        {
            flag = true;
        }
    }while (!flag);
    cout << "Thank you, have a nice day!" << endl;
    return 0;
}