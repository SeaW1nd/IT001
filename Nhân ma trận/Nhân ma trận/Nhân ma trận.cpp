#include <iostream>
using namespace std;
void NhapMaTran(float a[100][100], int b, int c) {
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> a[i][j];
        }
    }
}
void TichMaTran(float a[100][100], float d[100][100], float e[100][100], int b, int c,int same) {
    float Tich2 = 0;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= c; j++) {
            for (int x = 1; x <= same; x++) {
                Tich2 = Tich2 + a[i][x] * d[x][j];
                e[i][j] = Tich2;
            }
            Tich2 = 0;
        }
        
    }
}
void XuatMaTran(float a[100][100], int b, int c) {
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    float A[100][100], B[100][100], C[100][100];
    int m, n, l, k;
    cin >> m >> n;
    NhapMaTran(A, m, n);
    cin >> l >> k;
    NhapMaTran(B, l, k);
    TichMaTran(A, B, C, m, k, n);
    XuatMaTran(C, m, k);
    return 0;
}
