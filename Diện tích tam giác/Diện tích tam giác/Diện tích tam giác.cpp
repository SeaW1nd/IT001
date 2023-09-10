#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    float p, Dientich;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    Dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(2) << fixed << Dientich;
    return 0;

}
