#include "Fract.h"

int main()
{
    Fract f, g;
    cout << "Luu y: Mau so phai khac 0, neu khong mau so = 1\n";
    cout << "Nhap phan so dau tien: ";
    cin >> f;
    cout << "Nhap phan so thu hai: ";
    cin >> g;
    cout << "Cac phep tinh tren phan so\n";
    cout << f << " + " << g << " = " << f + g << '\n';
    cout << f << " - " << g << " = " << f - g << '\n';
    cout << f << " * " << g << " = " << f * g << '\n';
    cout << f << " / " << g << " = " << f / g << '\n';
    return 0;
}