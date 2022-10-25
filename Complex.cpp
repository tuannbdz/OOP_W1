#include "Complex.h"

int Complex::getReal()
{
	return real; 
}

int Complex::getImg()
{
	return img;
}

void Complex::setReal()
{
	int r; 
	cout << "Type real part: "; cin >> r;
	real = r;
}

void Complex::setImg()
{
	int img;
	cout << "Type real part: "; cin >> img;
	this->img = img; 
}

Complex operator+(Complex& a, Complex& b)
{
	int img = a.getImg() + b.getImg(); 
	int real = a.getReal() + b.getReal(); 
	return Complex(real, img); 
}

Complex operator-(Complex& a, Complex& b)
{
	int img = a.getImg() - b.getImg();
	int real = a.getReal() - b.getReal();
	return Complex(real, img);
}

Complex operator*(Complex& a, Complex& b)
{
	int img = a.getReal() * b.getImg() + a.getImg() * b.getReal();
	int real = a.getReal() * b.getReal() - a.getImg() * b.getImg();
	return Complex(real, img);
}

Complex operator/(Complex& a, Complex& b)
{
	
}