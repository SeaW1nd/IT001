#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long a[100000];
    long n, Max, Min, Tong, l2, l1, luu;
    cin >> n;
    for (long i = 0; i <= n-1; i++) {
        cin >> a[i];
    }
    Max = 0;
    Tong = 0;
    Min = a[0];
    for (long i = 0; i <= n-1; i++) {
        if (a[i] <= Min && (i % 2 ==0)) {
            Min = a[i];
            l1 = i;
        }
        if (a[i] >= Max && (i % 2 != 0)) {
            Max = a[i];
            l2 = i;
        }
    }
    /*for (long long j = 1; j <= n; j += 2) {
        if (a[j] <= Min) {
            Min = a[j];
            j = y;
        }
    }*/
    if (Min < Max) {
        luu = a[l1];
        a[l1] = a[l2];
        a[l2] = luu;
    }
    for (long i = 0; i <= n-1; i++) {
        Tong = Tong + a[i]*(pow(-1,i));
    }
    cout << Tong;
    return 0;
}
