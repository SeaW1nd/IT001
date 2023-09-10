#include <iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b) {
    if (b == 0) return a;
    else return UCLN(b, a % b);
}
int Phanso(int a, int b, int c, int d) {
    int dem = 0;
    int ucln;
    while(a!=c || b!=d) {
        a++;
        b++;
        ucln = UCLN(a, b);
        a = (a / ucln);
        b = (b / ucln);
        if (a == c && b == d) break;
        else dem++;
        if (a > pow(10, 5) || c > pow(10, 5)) return 0;
    }
    if (dem == pow(10, 5)) return 0;
     else return dem+1;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Phanso(a, b, c, d);
    return 0;
}
