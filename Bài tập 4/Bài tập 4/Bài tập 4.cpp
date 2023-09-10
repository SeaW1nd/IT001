
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int d, e, f;
    int Gio, Phut, Giay;
    cout << "Nhap gio thu nhat: "; cin >> a;
    cout << "Nhap phut thu nhat: "; cin >> b;
    cout << "Nhap giay thu nhat: "; cin >> c;
    cout << "Nhap gio thu 2: "; cin >> d;
    cout << "Nhap phut thu 2: "; cin >> e;
    cout << "Nhap giay thu 2: "; cin >> f;
    Gio = a + d;
    Phut = b + e;
    Giay = c + f;
    if (Giay >= 60) {
        Phut = Phut + Giay / 60;
        Giay = Giay % 60;
    }
    if (Phut >= 60) {
        Gio = Gio + Phut / 60;
        Phut = Phut % 60;
    }
    if (Gio >= 24) Gio = Gio - 24;
    cout << "Tong hai gio la " << Gio << "gio " << Phut << "phut " << Giay << "giay \n";
    return 0;
}
