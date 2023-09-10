#include <iostream>
#include <iomanip>
using namespace std;
void NhapMaTran(double a[100][100], int n, int m) {
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
}
double VetMaTran(double a[100][100], int n, int m) {
    double Tong = 0;
    for (int i = 1; i <= n; i++) {
        Tong = Tong + a[i][i];
    }
    return Tong;
}
int main()
{
    double a[100][100];
    int n, m;
    cin >> n >> m;
    NhapMaTran(a, n, m);
    cout << VetMaTran(a, n, m);
    return 0;
}
