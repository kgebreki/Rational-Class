#ifndef RATIONALCLASS_8_RATIONALCLASS_8_H
#define RATIONALCLASS_8_RATIONALCLASS_8_H
/*
 * Kaleb Gebrekirstos
 * Header file
 */
class Rational {

//Public methods used in the class
public:
    void add(Rational x);
    void sub(Rational x);
    void mult(Rational x);
    void div(Rational x);
    Rational operator+(Rational x);
    Rational operator-(Rational x);
    Rational operator*(Rational x);
    Rational operator/(Rational x);
    bool operator>(Rational x);
    bool operator<=(Rational x);
    bool operator<(Rational x);
    bool operator>=(Rational x);
    bool operator==(Rational x);
    bool operator!=(Rational x);
    Rational operator-();
    Rational operator!();
    void setValue(int n, int d);
    void negate();
    void print();
    Rational();

//Private methods and variables
private:
    int num;
    int denom;
    void reduce();
    void reciprocal();
    int gcd(int n, int d);
};

#endif //RATIONALCLASS_8_RATIONALCLASS_8_H
