#pragma once

#include <iostream>
using namespace std; 


class Complex
{
	int real, img;
public: 
	Complex():real(0), img(0){}
	Complex(int r, int i):real(r), img(i){}
	int getReal(); 
	int getImg(); 
	void setReal(); 
	void setImg(); 
	//friend Complex operator+(Complex&, Complex&); 
};

