#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;
int main()
{
    int so, dem, lim, soluong;
    string n;
    dem = 0;
    cin >> so >> lim;
    stringstream ss;
    ss << so;
    ss >> n;
    soluong = n.length();
    for (int i = so; i <= lim; i = i + pow(10, soluong)) dem++;
    cout << dem;
    return 0;
}
