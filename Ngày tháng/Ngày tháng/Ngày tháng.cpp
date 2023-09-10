#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
const int Max_Year = 9999;
const int Min_Year = 1;
struct NgayThang {
	int ngay;
	int thang;
	int nam;
};
bool isNamNhuan(int nam) {
	if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0)) return true;
	else return false;
}
bool isNamDacBiet(int nam) {
	if (nam > 0 && nam % 3328 == 0) return true;
	else return false;
}
bool CheckNgay(int ngay, int thang, int nam) {
	if (nam > Max_Year || nam < Min_Year) return false;
	if (thang < 1 || thang > 12) return false;
	if (ngay < 1 || ngay > 31) return false;
	if (thang == 2) {
		if (isNamDacBiet(nam) == true) return (ngay <= 30);
		else if (isNamNhuan(nam) == true) return (ngay <= 29);
		else return (ngay <= 28);
	}
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11) return (ngay <= 30);
	return true;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	string Date;
	string ChuoiDate = "";
	NgayThang A[40320];
	int dem = 0;
	int mang = 0;
	//vector <string> ChuoiDate;
	for (int a = 0; a < 3; a++) {
		cin >> Date;
		ChuoiDate = ChuoiDate + Date;
	}
	NgayThang DungNgay;
	sort(ChuoiDate.begin(), ChuoiDate.end());
	//Date.erase(remove(Date.begin(), Date.end(), ' '), Date.end());
	//sort(Date.begin(), Date.end(), greater<char>());
	do {
		int Nam = stoi(ChuoiDate.substr(0, 4));
		int Thang = stoi(ChuoiDate.substr(4, 2));
		int Ngay = stoi(ChuoiDate.substr(6, 2));
		if (CheckNgay(Ngay, Thang, Nam) == true) {
			dem++;
			//Date.insert(4, " ");
			//Date.insert(7, " ");
			////ChuoiDate.push_back(Date);
			//Date.erase(remove(Date.begin(), Date.end(), ' '), Date.end());
			DungNgay.nam = Nam;
			DungNgay.ngay = Ngay;
			DungNgay.thang = Thang;
			A[mang] = DungNgay;
			mang = mang + 1;
		}
		else continue;
	} while (next_permutation(ChuoiDate.begin(), ChuoiDate.end()));
	cout << dem << '\n';
	for (int x = 0; x < mang; x++) {
		cout << setfill('0') << setw(4) << A[x].nam << " " << setw(2) << A[x].thang << " " << setw(2) << A[x].ngay << '\n';
	}
	return 0;
}