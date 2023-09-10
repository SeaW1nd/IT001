#include <iostream>
#include <numeric>
using namespace std;
struct PhanSo {
    int x, y;
};
void Nhap(PhanSo &a) {
    cin >> a.x;
    cin >> a.y;
}
PhanSo Nhap() {
    PhanSo b;
    cin >> b.x;
    cin >> b.y;
    return b;
}
int SoSanh(PhanSo a, PhanSo b) {
    if (a.y < 0) {
        a.x = (-1)*a.x;
        a.y = abs(a.y);
    }
    if (b.y < 0) {
        b.x = (-1) * b.x;
        b.y = abs(b.y);
    }
    a.x = a.x * b.y;
    b.x = b.x * a.y;
    if ((a.x == b.x)) return 0;
    else if (a.x > b.x) return 1;
    else return -1;
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
