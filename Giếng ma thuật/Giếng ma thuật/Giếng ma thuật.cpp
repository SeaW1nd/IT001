#include <iostream>
using namespace std;
int main()
{
    int a, b, n, Tongtien;
    Tongtien = 0;
    cin >> a >> b >> n;
    if (n == 0) Tongtien = 0;
    for (int i = 1; i <= n; i++) {
        for (int l1 = a, l2 = b, dem = 1;dem == 1; a++, b++) {
            Tongtien = Tongtien + a * b;
            dem++;
        }
    }
    cout << Tongtien;
    return 0;
}
