#include "Complex.h"

void Complex::inputComplex()
{
	cout << "Type real part: "; cin >> real;
	cout << "Type imaginary part: "; cin >> img;
}

void Complex::outputComplex()
{
	cout << real; 
	if (img < 0)
		cout << " - " << abs(img) << "i";
	else
		cout << " + " << img << "i";
}

double Complex::getReal() const
{
	return real; 
}

double Complex::getImg() const
{
	return img;
}

void Complex::setComplex(double a, double b)
{
	real = a, img = b; 
}

void Complex::setReal(double r)
{
	real = r;
}

void Complex::setImg(double img)
{
	this->img = img; 
}

Complex operator+(Complex& a, Complex& b)
{
	double img = a.getImg() + b.getImg(); 
	double real = a.getReal() + b.getReal(); 
	return Complex(real, img); 
}

Complex operator-(Complex& a, Complex& b)
{
	double img = a.getImg() - b.getImg();
	double real = a.getReal() - b.getReal();
	return Complex(real, img);
}

Complex operator*(Complex& a, Complex& b)
{
	double A = a.getImg(), B = a.getReal();
	double C = b.getImg(), D = b.getReal();

	double real = A * C - B * D; 
	double img = B * C + A * D; 
	return Complex(real, img);
}

Complex operator/(Complex& a, Complex& b)
{
	double A = a.getImg(), B = a.getReal();
	double C = b.getImg(), D = b.getReal();

	double img = (B * C - A * D) / (C * C + D * D); 
	double real = (A * C + B * D) / (C * C + D * D); 
	return Complex(real, img); 
}

istream& operator>>(istream& in, Complex& c)
{
	double real, img;
	in >> real >> img;
	c.setComplex(real, img);
	return in;
}

ostream& operator<<(ostream& out, const Complex& c)
{
	out << c.getReal();

	double img = c.getImg();

	if (img < 0)
		out << " - " << abs(img) << "i";
	else
		out << " + " << img << "i";
	return out;
}