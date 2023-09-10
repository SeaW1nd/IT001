#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isTuDoBac2(long a) {
    if (a % 2 == 0) a = a / 2;
    if (a % 2 == 0) return false;
    for (int x = 3; x <= sqrt(a); x++) {
        if (a % x == 0) {
            a = a / x;
            if (a % x == 0) return false;
        }
    }
    return true;
}
int main()
{
    long dem = 0;
    long lf, rt;
    vector <long> ChuoiSo;
    cin >> lf >> rt;
    for (long i = lf; i <= rt; i++) {
        if (isTuDoBac2(i) == true) ChuoiSo.push_back(i);
    }
    for (int i = 0; i < ChuoiSo.size(); i++) {
        for (int j = 1; j < ChuoiSo.size(); j++) {
            if (isTuDoBac2(ChuoiSo[i]*ChuoiSo[j]) == true && i<=j) dem++;
        }
    }
    cout << dem;
}
