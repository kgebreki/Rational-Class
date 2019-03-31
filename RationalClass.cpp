#include "RationalClass.h"
#include <iostream>
using namespace std;
/*
 * Kaleb Gebrekirstos
 * Method implementation class
 */
Rational::Rational(){
    num = 0;
    denom = 1;
}
void Rational::setValue(int n, int d){
    num = n;
    denom = d;
    reduce();
}
void Rational::add(Rational x){
    num = num*x.denom + denom*x.num;
    denom *= x.denom;
}
void Rational::sub(Rational x){
    x.negate();
    add(x);
}
void Rational::mult(Rational x){
    num *= x.num;
    denom *= x.denom;
}
void Rational::div(Rational x){
    x.reciprocal();
    mult(x);
}
Rational Rational::operator+(Rational x){
    Rational temp = *this;
    temp.add(x);
    return temp;
}
Rational Rational::operator-(Rational x){
    Rational temp = *this;
    temp.sub(x);
    return temp;
}
Rational Rational::operator*(Rational x) {
    Rational temp = *this;
    temp.mult(x);
    return temp;
}
Rational Rational::operator/(Rational x) {
    Rational temp = *this;
    temp.div(x);
    return temp;
}
Rational Rational::operator-(){
    Rational temp = *this;
    temp.negate();
    return temp;
}
Rational Rational::operator!(){
    Rational temp = *this;
    temp.reciprocal();
    return temp;
}
bool Rational::operator>(Rational x){
    return num*x.denom > denom*x.num;
}
bool Rational::operator<=(Rational x){
    return !(operator>(x));
}
bool Rational::operator<(Rational x){
    return num*x.denom < denom*x.num;
}
bool Rational::operator>=(Rational x){
    return !(operator<(x));
}
bool Rational::operator==(Rational x){
    return num*x.denom == denom*x.num;
}
bool Rational::operator!=(Rational x){
    return !(operator==(x));
}
void Rational::negate(){
    num = -num;
}
void Rational::reduce(){
    int g = abs(gcd(num, denom));
    if (denom < 0)
    {
        denom = -denom;
        num = -num;
    }
    num /= g;
    denom /= g;
}
void Rational::reciprocal() {
    int y = denom;
    denom = num;
    num = y;
}
int Rational::gcd (int a, int b){
    if(b ==0) return a;
    return gcd(b, a%b);
}
void Rational::print(){
    reduce();
    cout << num << "/" << denom;
}