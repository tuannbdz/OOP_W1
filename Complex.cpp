#include "Complex.h"

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

void Complex::setImg(double i)
{
	img = i;
}

double Complex::module()
{
	double real = this->getReal();
	double img = this->getImg();
	return sqrt(real * real + img * img);	
}

Complex Complex::operator+(Complex & a)
{
	return Complex(real + a.real, img + a.img);
}

Complex Complex::operator-(Complex& a)
{
	return Complex(real - a.real, img - a.img);
}

Complex Complex::operator*(Complex& a)
{
	double A = img, B = real;
	double C = a.img, D = a.real;

	double real = A * C - B * D;
	double img = B * C + A * D;
	return Complex(real, img);
}

Complex Complex::operator/(Complex& a)
{
	double A = img, B = real;
	double C = a.img, D = a.real;

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