#include <iostream>
#include <string>
using namespace std;
void input(int& a) {
    cin >> a;
}
long TongChuSo(int& a) {
    int Tong = 0;
    while (a != 0) {
        Tong = Tong + a % 10;
        a = a / 10;
    }
    return Tong;
}
int main()
{
    int a;
    input(a);
    cout << TongChuSo(a);
    return 0;
}
