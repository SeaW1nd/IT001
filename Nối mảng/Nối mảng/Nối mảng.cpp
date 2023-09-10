#include <iostream>
#include <algorithm>
using namespace std;
void NhapMaTran(int a[1000], int b) {
    for (int i = 1; i <= b; i++) {
        cin >> a[i];
    }
}
void ChuyenMaTran(int a[1000], int b[1000], int c) {
    for (int i = 1; i <= c; i++) {
        b[i] = a[i];
    }
}
void AddMaTran(int a[1000], int b[1000], int c[1000], int e, int d) {
    for (int i = 1; i<= (d+e);i++) {
        if (i <= e) c[i] = a[i];
        else c[i] = b[i-e];
    }
}
int main()
{
    int m, n;
    int a[1000], b[1000], c[1000], d[1000];
    cin >> m;
    NhapMaTran(a, m);
    cin >> n;
    NhapMaTran(b, n);  
    AddMaTran(a, b, c, m, n);
    sort(c+1, c + (m + n+1));
    ChuyenMaTran(c, d, (m+n));
    for (int i = 1; i <= m + n; i++) cout << d[i] << " ";
}
