#include "Fract.h"

int gcd(int a, int b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}
Fract Fract::reduce() {
    int UCLN = gcd(tu, mau);
    UCLN = max(UCLN, 1);
    tu /= UCLN;
    mau /= UCLN;
    Fract ans;
    ans.setFract(tu, mau);
    return ans;
}
int Fract::getDeno() {
    return mau;
}
int Fract::getNumer() {
    return tu;
}
void Fract::setDeno(int x) {
    mau = (x ? x : 1);
}
void Fract::setNumer(int x) {
    tu = x;
}
void Fract::setFract(int a, int b) {
    this->setNumer(a);
    this->setDeno(b);
}
Fract Fract::inverse() {
    swap(tu, mau);
    Fract ans;
    ans.setFract(tu, mau);
    return ans;
}
Fract Fract::operator+(const Fract& f) {
    Fract ans;
    ans.tu = tu * f.mau + f.tu * mau;
    ans.mau = mau * f.mau;
    return ans.reduce();
}
Fract Fract::operator-(const Fract& f) {
    Fract ans;
    ans.tu = tu * f.mau - f.tu * mau;
    ans.mau = mau * f.mau;
    return ans.reduce();
}
Fract Fract::operator*(Fract& f) {
    Fract ans;
    ans.tu = tu * f.tu;
    ans.mau = mau * f.mau;
    return ans.reduce();
}
Fract Fract::operator/(Fract& f) {
    Fract ans;
    ans.tu = tu * f.mau;
    ans.mau = mau * f.tu;
    return ans.reduce();
}
istream& operator>>(istream& in, Fract& f) {
    int num, det;
    in >> num >> det;
    f.setFract(num, det);
    return in;
}
ostream& operator<<(ostream& out, const Fract& f) {
    out << f.tu << "/" << f.mau;
    return out;
}