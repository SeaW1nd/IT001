
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int& n);
int SoPhanTuChuaY(int a[], int n, int y);
bool isPrime(int a) {
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) return false;
    }
    return true;
}
void NhapmangSNT(int a[], int& n) {
    cin >> n;
    a[0] = 2;
    for (int i = 1; i < n; i++) {
        for (int j = a[i-1]+1; ; j++) {
            if (isPrime(j) == true) {
                a[i] = j;
                break;
            }
        }
    }
}
bool XetChuSo(int a, int y) {
    while (a != 0) {
        int x = a % 10;
        if (x == y) return true;
        a = a / 10;
    }
    return false;
}
int SoPhanTuChuaY(int a[], int n, int y) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (XetChuSo((a[i]), y) == true) result++;
    }
    return result;
}

int main()
{
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;;
    return 0;
}

