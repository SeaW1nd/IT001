#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int UCLN(int a, int b) {
    /*if (a == b) return a;
    while (a != b) {
        if (a == 0) {
            return b;
            break;
        }
        else if (b == 0) {
            return a;
            break;
        }
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;*/
    if (b == 0) return a;
    return UCLN(b, a % b);
}
int main()
{
    long long a[100000], mem, result, Max, vitri, dem;
    long long n;
    long long b[10000];
    bool dung = false;
    Max = 0;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cin >> a[i];
    }
    /*for (long x = 0; x < n; x++) {
        mem = a[x];
        a[x] = 0;
        result = a[0];
        for (long y = 1; y < n; y++) {
            result = UCLN(result, a[y]);
            if (result == 1) break;
        }
        if (result >= Max) {
            Max = result;
            vitri = x;
        }
        a[x] = mem;
    }*/
    /* for (long x = 0; x < vitri; x++) {
         mem = a[x];
         a[x] = 0;
         result = a[0];
         for (int y = 1; y < n; y++) {
             result = UCLN(result, a[y]);
             if (result == 1) break;
         }
         if (result == Max) {
             vitri = x;
             dung = true;
         }
         if (dung == true) break;
         a[x] = mem;
     }*/
    for (long x = 0; x < n; x++) {
        mem = a[x];
        a[x] = 0;
        result = a[0];
        for (long y = 1; y < n; y++) {
            result = UCLN(result, a[y]);
            if (result == 1) break;
        }
        if (result >= Max) {
            Max = result;
            // vitri = x;
        }
        dem = x;
        for (dem; dem < x + 1; dem++) b[dem] = result;
        a[x] = mem;
    }
    for (int p = 0; p < n; p++) {
        if (b[p] == Max) {
            vitri = (p + 1);
            break;
        }
    }
    //cout << (vitri+1) << " " << Max;
    cout << (vitri) << " " << Max;
    return 0;
}
