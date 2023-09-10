#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long dem, so, Tong;
    string chu, Lim;
    cin >> Lim;
    stringstream ss;
    ss << Lim;
    ss >> so;
    dem = Lim.length();
    if (so == 1) Tong = 1;
    if (dem == 1 && so != 1) {
        Tong = 2;
    }
    if (dem == 2) {
        so = so - (so % 10);
        Tong = 1 + dem + ((((so - 10) / 10) + 1) * 2);
        if (Lim[dem - 1] == '0') Tong = Tong - dem;
    }
    if (dem > 2) {
        so = so - (so % 10);
        Tong = 1 + ((((so - pow(10, dem - 1)) / 10) + 1) * dem);
        for (unsigned long i = 2; i <= dem - 1; i++) {
            Tong = Tong + i * ((9 * pow(10, i - 2)));
        }
        if (Lim[dem - 1] != '0') Tong = Tong + dem;
    }
    /*for (int i = 10; i <= Lim; i += 10) {
        //if (i == 1) dem++;
        stringstream ss;
        ss << i;
        ss >> chu;
        t = chu.length() - 1;
        so = pow(10,t-(t==t+1)?(t):(t+1));
        if (i % 10 == 0 || i == Lim) {
            dem = dem + t + 1;
        }
    }*/
    cout << Tong;
    return 0;
}
