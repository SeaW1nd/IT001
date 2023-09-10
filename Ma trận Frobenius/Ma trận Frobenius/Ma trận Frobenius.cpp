#include <iostream>
using namespace std;
void NhapMaTran(double a[100][100], int n, int m) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}
bool isMaTranDonVi(double a[100][100], int n, int m) {
    for (int i = 1; i <= n; i++) {
        if (a[i][i] != 0) return false;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i][j] != 0 || a[j][i] != 0) return false;
        }
    }
    return true;
}
bool CheckMaTran(double a[100][100], int n, int m, int x) {
    for (int i = x; i <= x; i++) {
        for (int j = 1; j < i; j++) {
            if (a[j][i] != 0) return false;
        }
    }
    return true;
}

bool isFrobenius(double a[100][100], int n, int m) {
    int dem = 0;
    int temp = 0;
    if (isMaTranDonVi(a, m, n) == true) return true;
    for (int i = 1; i <= n; i++) {
        if (a[i][i] != 1) return false;
    }
    for (int j = 1; j <= m; j++) {
        for (int i = j + 1; i <= n; i++) {
            if (a[i][j] == 0) {
                if (j == 1) continue;
                else if (CheckMaTran(a, n, m, j) == true) continue;
                else return false;
            }
            else if (a[i][j] != 0 && CheckMaTran(a, m, n, j) == false) return false;
            else if (a[i][j] != 0 && CheckMaTran(a, n, m, j) == true) {
                dem++;
                temp = j;
                break;
            }
        }
    }
    if (dem > 1) return false;
    else if (dem == 1) {
        for (int i = 1; i < temp; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i][j] != 0 || a[j][i] != 0) return false;
            }
        }
        for (int i = temp + 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i][j] != 0 || a[j][i] != 0) return false;
            }
        }
    }
    return true;
}
int main()
{
    double a[100][100];
    int n, m;
    cin >> n >> m;
    NhapMaTran(a, n, m);
    if (isFrobenius(a, n, m) == false) cout << "No";
    else cout << "Yes";
    return 0;
}