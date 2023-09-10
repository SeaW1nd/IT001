#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double doi1, nghi1, doi2, nghi2, socay;
    long double Tong;
    uint64_t x, t;
    cin >> doi1 >> nghi1 >> doi2 >> nghi2 >> socay;
    Tong = socay / ((doi1 + doi2) - (doi1 / nghi1) - (doi2 / nghi2));
    x = floor(Tong);
    t = socay + 1;
    while (t > socay) {
        x--;
        t = (doi1 + doi2) * x - (floor((x / nghi1)) * doi1) - (floor((x / nghi2)) * doi2);
    }
    while (t < socay) {
        x++;
        t = (doi1 + doi2) * x - (floor((x / nghi1)) * doi1) - (floor((x / nghi2)) * doi2);
    }
    cout << x;
    return 0;
}