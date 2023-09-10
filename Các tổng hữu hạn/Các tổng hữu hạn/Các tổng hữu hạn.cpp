#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
float TongHuuHan(float a) {
    float Tong = 0;
    for (float i = 1; i <= a; i++) {
        Tong = Tong + pow(i,i);
    }
    return Tong;
}
float Giaithua(float a) {
    float Giaithua = 1;
    for (float i = 1; i <= a; i++) {
        Giaithua = Giaithua * i;
    }
    return Giaithua;
}
float TongGiaiThua(float a) {
    float Tong = 0;
    for (float i = 1; i <= a; i++) {
        Tong = Tong + Giaithua(i);
    }
    return Tong;
}
float TongPhanSo(float a) {
    float Tong = ((2 * a) / (a + 1));
    return Tong;
}
int main()
{
    float a;
    cin >> a;
    string chu = to_string(TongPhanSo(a));
    if (TongHuuHan(a) > pow(10, 10)) cout << scientific << setprecision(5) << TongHuuHan(a) << endl;
    else cout << TongHuuHan(a)<< endl;
    if (TongGiaiThua(a) > pow(10, 10)) cout << scientific << setprecision(5) << TongGiaiThua(a) << endl;
    else cout << TongGiaiThua(a) << endl;
    if (TongPhanSo(a) > pow(10, 10)) cout << scientific << TongPhanSo(a);
    else printf("%.6g", TongPhanSo(a));
    return 0;
}
