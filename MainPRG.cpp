#include "Fract.h"
#include "Mono.h"
#include "Complex.h"

void fractProcess() {
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
}

void monoProcess() {
    Mono f, g;
    cout << "Nhap don thuc thu nhat: ";
    cin >> f;
    cout << "Nhap don thuc thu hai: ";
    cin >> g;
    cout << "Cac phep tinh tren don thuc\n";
    cout << f << " + " << g << " = " << f + g << '\n';
    cout << f << " - " << g << " = " << f - g << '\n';
    cout << f << " * " << g << " = " << f * g << '\n';
    cout << f << " / " << g << " = " << f / g << '\n';
    cout << "Dao ham cua don thuc thu nhat : " << f.derivative() << '\n';
    cout << "Dao ham cua don thuc thu hai : " << g.derivative() << '\n';
    cout << "Nguyen ham cua don thuc thu nhat: ";
    f.anti_derivative();
    cout << "Nguyen ham cua don thuc thu hai: ";
    g.anti_derivative();
}

void complexProcess() {
    Complex a, b;
    cout << "Nhap so phuc dau tien.\n";
    cout << "Complex (a + bi): "; cin >> a;
    cout << "Nhap so phuc thu hai.\n";
    cout << "Complex (a + bi): "; cin >> b;

    cout << "So phuc dau tien: " << a << "\n";
    cout << "So phuc thu hai: " << b << "\n";
    cout << "Cac phep tinh tren so phuc\n";
    cout << a << " + " << b << " = " << a + b << '\n';
    cout << a << " - " << b << " = " << a - b << '\n';
    cout << a << " * " << b << " = " << a * b << '\n';
    cout << a << " / " << b << " = " << a / b << '\n';
}
int main()
{
    fractProcess();
    complexProcess();
    monoProcess();
    return 0;
}