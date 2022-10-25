#pragma once

#include <iostream>
#include <cstdlib> //abs
using namespace std;

class Complex
{
	double real, img;
public:
	Complex() :real(0), img(0) {}
	Complex(double r, double i) :real(r), img(i) {}
	void inputComplex();
	void outputComplex();
	double getReal() const;
	double getImg() const;
	void setReal(double);
	void setImg(double);
	void setComplex(double, double);
	friend istream& operator>>(istream&, Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	Complex operator-(Complex&);
	Complex operator+(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
};



