#include <iostream>
using namespace std;
int NgayTrongNam(int nam, int thang, int ngay) {
	int mang[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	if (thang < 3) nam = nam - 1;
	int Thu = 1 + ((nam + nam / 4 - nam / 100 + nam / 400 + mang[thang - 1] + ngay) % 7);
	if (Thu == 1) return 8;
	return Thu;
}
bool isNamNhuan(int nam) {
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) return true;
	else return false;
}
int CheckNgay(int nam, int thang, int ngay) {
	bool congtac = false;
	for (int t = 1; t <= 12; t = t + 2) {
		if (thang == t) {
			bool congtac = true;
			break;
		}
		if (t == 7) {
			t++; continue;
		}
	}
	if (ngay > 31) return -1;
	else if (ngay == 31 && congtac == false) return -1;
	else if (ngay == 30 && congtac == true) return -1;
	else if (ngay == 29 && isNamNhuan(nam) == false) return -1;
	return ngay;
}
int main()
{
	int x, y, i, j;
	int Ngaydautien = 0;
	int Ngaycantim;
	cin >> x >> y >> i >> j;
	for (int a = 1; ; a++) {
		if (NgayTrongNam(j, i, a) == y) {
			Ngaydautien = a;
			break;
		}
	}
	Ngaycantim = Ngaydautien + 7 * (x - 1);
	cout << CheckNgay(j, i, Ngaycantim);
	return 0;
}
