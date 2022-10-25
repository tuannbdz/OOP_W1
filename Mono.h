#pragma once
#ifndef _MONO_H_
#define _MONO_H_
#include <iostream>
#include <math.h>
using namespace std;
class Mono
{
	double coef, expo;
public:
	void setCoef(double);
	void setExpo(double);
	double getCoef();
	double getExpo();
	double computeValue(double);
	Mono derivative();
	void anti_derivative();
	Mono operator+(const Mono&);
	Mono operator-(const Mono&);
	Mono operator*(const Mono&);
	Mono operator/(const Mono&);
	friend istream& operator>>(istream&, Mono&);
	friend ostream& operator<<(ostream&, const Mono&);
};
#endif // !

