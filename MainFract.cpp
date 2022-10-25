#include "Fract.h"
#include "Complex.h"

int main()
{
    /*Fract f, g;
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
    return 0;*/

    Complex a, b; 
    cout << "Type first complex number.\n"; 
    cout << "Complex (a + bi): "; cin >> a; 
    cout << "Type second complex number.\n";
    cout << "Complex (a + bi): "; cin >> b;
    
    cout << a << "\n" << b << "\n"; 
    cout << a << " + " << b << " = " << a + b << '\n';
    cout << a << " - " << b << " = " << a - b << '\n';
    cout << a << " * " << b << " = " << a * b << '\n';
    cout << a << " / " << b << " = " << a / b << '\n';
}