#include <iostream>
using namespace std;
int main()
{
    int a[3];
    int Max, Min;
    Max = a[0];
    for (int i = 0; i < 3; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a[i];
        if (Max < a[i]) Max = a[i];
    }
    Min = a[0];
    for (int i = 0; i < 3; i++) {
        if (Min > a[i]) Min = a[i];
    }
    cout << "So lon nhat la: " << Max << "\n";
    cout << "So nho nhat la: " << Min;
    return 0;
}

