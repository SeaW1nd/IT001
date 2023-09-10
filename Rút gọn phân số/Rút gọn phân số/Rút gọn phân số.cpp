#include <iostream>
#include <numeric>
#define MAXN 200
using namespace std;
struct PhanSo {
    int tu;
    int mau;
};
void Nhap(PhanSo a[], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].tu;
        cin >> a[i].mau;
    }
}
void Xuat(PhanSo a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].mau == 0) cout << "Khong thoa yeu cau bai toan" << endl;
        else {
            int sochia = (gcd(a[i].tu, a[i].mau));
            a[i].tu = a[i].tu / sochia;
            a[i].mau = a[i].mau / sochia;
            if (a[i].tu < 0 && a[i].mau < 0) {
                a[i].tu = abs(a[i].tu);
                a[i].mau = abs(a[i].mau);
            }
            else if (a[i].mau < 0) {
                a[i].mau = abs(a[i].mau);
                a[i].tu = (-1) * a[i].tu;
            }
            if (a[i].tu % a[i].mau == 0) cout << a[i].tu << endl;
            else cout << a[i].tu << "/" << a[i].mau << endl;
        }
    }
}
int main()
{
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}