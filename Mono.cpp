#include "Mono.h"
void Mono::setCoef(double x) {
	coef = x;
}
void Mono::setExpo(double x) {
	expo = x;
}
double Mono::getCoef() {
	return coef;
}
double Mono::getExpo() {
	return expo;
}
double Mono::computeValue(double X) {
	return coef * pow(X, expo);
}
Mono Mono::derivative() {
	coef *= expo;
	expo = max(0.0, expo - 1);
	Mono ans;
	ans.coef = coef;
	ans.expo = expo;
	return ans;
}
void Mono::anti_derivative() {
	cout << "(1 / " << coef << ")" << "[(" << coef << "X + " << expo << ") / " << coef + 1 << "]" << " ^ " << coef + 1 << " + c" << '\n';
}
Mono Mono::operator+(const Mono& m) {
	Mono ans;
	ans.coef = coef + m.coef;
	ans.expo = expo;
	return ans;
}
Mono Mono::operator-(const Mono& m) {
	Mono ans;
	ans.coef = coef - m.coef;
	ans.expo = expo;
	return ans;
}
Mono Mono::operator*(const Mono& m) {
	Mono ans;
	ans.coef = coef * m.coef;
	ans.expo = expo + m.expo;
	return ans;
}
Mono Mono::operator/(const Mono& m) {
	Mono ans;
	ans.coef = coef / m.coef;
	ans.expo = expo - m.expo;
	return ans;
}

istream& operator>>(istream& in, Mono& m) {
	double co, ex;
	in >> co >> ex;
	m.setCoef(co);
	m.setExpo(ex);
	return in;
}
ostream& operator<<(ostream& out, const Mono& m) {
	out << m.coef << "X^" << m.expo;
	return out;
}
