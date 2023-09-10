#include <iostream>
using namespace std;
void NhapMaTran(float A[100][100], int m, int n) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> A[i][j];
		}
	}
}
void MaTranChuyenVi(float A[100][100], float B[100][100], int m, int n) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			B[j][i] = A[i][j];
		}
	}
}
void XuatMaTran(float B[100][100], int m, int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	float A[100][100], B[100][100];
	int m, n;
	cin >> m >> n;
	NhapMaTran(A, m, n);
	MaTranChuyenVi(A, B, m, n);
	XuatMaTran(B, m, n);
	return 0;
}
