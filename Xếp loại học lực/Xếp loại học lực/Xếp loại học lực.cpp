#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, DTB;
    cin >> a >> b >> c;
    DTB = (a + b + c) / 3;
    if (DTB >= 9 && DTB <= 10) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: XUAT SAC";
    }
    else if (DTB >= 8 && DTB < 9) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: GIOI";
    }
    else if (DTB >= 7 && DTB < 8) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: KHA";
    }
    else if (DTB >= 6 && DTB < 7) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: TB KHA";
    }
    else if (DTB >= 5 && DTB < 6) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: TB";
    }
    else if (DTB >= 4 && DTB < 5) {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: YEU";
    }
    else {
        cout << "DTB = " << setprecision(2) << fixed << DTB << endl;
        cout << "Loai: KEM";
    }
    return 0;
}

