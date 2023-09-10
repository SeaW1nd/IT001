#include <iostream>
using namespace std;
unsigned long KetQua(unsigned long a) {
    unsigned long n = 0;
    for (unsigned long x = 2; x <= a; x=x*2) {
        unsigned long temp = a / x;
        n = n + temp;
    }
    return n;
}
int main()
{
    unsigned long f, t;
    cin >> f >> t;
    unsigned long Tong = KetQua(t) - KetQua(f - 1);
    cout << Tong;
    return 0;
}
