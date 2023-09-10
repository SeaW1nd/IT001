#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int so, dai, s1, s2, Tong, Tong2;
    string chuoi, c1, c2;
    Tong = 0;
    Tong2 = 0;
    cin >> chuoi;
    stringstream ss;
    ss << chuoi;
    ss >> so;
    dai = chuoi.length();
    c1 = chuoi.substr(0, (dai !=2) ? 2 : 1);
    c2 = chuoi.substr((dai!=2)?2:1, (dai == 4) ? 2 : 1);
    s1 = stoi(c1);
    s2 = stoi(c2);
    //cout << c1 << " " << c2 << endl;
    if (dai == 2 && s1+ s2 <=18 && s1 > s2) {
        if (s2 == 0) Tong = Tong + 1000 + (s1-1)*100+s2;
        else if (s2!=0) Tong = Tong + 1000 + (s2 - 1)*100 + s1;
    }
    if (dai == 3 && s1 <= 18 && s2 <= 9) {
        if (s2 == 0) Tong = Tong + (s1 - 9) * 1000 + 900 + s2;
        else Tong = Tong + 1000 + (s2 - 1)*100 + (s1 - 9)*10 + 9;
    }
    if (dai ==4 && s1 <=18 && s2 <=18) {
        if (s2 < 10) {
            if (s2 == 0) Tong = Tong  + (s1 - 9)*1000 + 900 + s2;
            else if (s2 != 0) {
                Tong = Tong + s2 * 1000 + (s1 - 9) * 10 + 9;
                Tong2 = Tong2 + (s1 - 9) * 1000 + 900 + s2;
                if (Tong > Tong2) Tong = Tong2;
            }
        }
        else if (s2 >= 10) {
            Tong = Tong + (s2 - 9) * 1000 + 900 + (s1 - 9) * 10 + 9;
            Tong2 = Tong2 + (s1 - 9) * 1000 + 900 + (s2 - 9) * 10 + 9;
            if (Tong > Tong2) Tong = Tong2;
        }
    }
    cout << Tong;
    return 0;
}
