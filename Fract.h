#pragma once
#ifndef _FRACT_H_
#define _FRACT_H_
#include <iostream>
#include <math.h>
using namespace std;

class Fract {
    double tu, mau;
public:
    int getNumer();
    int getDeno();
    void setFract(int, int);
    void setNumer(int);
    void setDeno(int);
    Fract reduce();
    Fract inverse();
    Fract operator+(const Fract&);
    Fract operator-(const Fract&);
    Fract operator*(Fract&);
    Fract operator/(Fract&);
    friend istream& operator>>(istream&, Fract&);
    friend ostream& operator<<(ostream&, const Fract&);
    
};
#endif