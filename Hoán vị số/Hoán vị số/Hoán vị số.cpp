#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;
void NhapMaTran(vector <vector <string> > &A, int hang, int cot) {
	string temp;
	for (int i = 0; i < hang; i++) {
		vector <string> row;
		for (int j = 0; j < cot; j++) {
			cin >> temp;
			row.push_back(temp);
		}
		A.push_back(row);
		row.clear();
	}
}
void Check0(vector <vector<string> > &A, int hang, int cot) {
	for (int i = 0; i < cot; i++) {
		for (int j = 0; j < hang; j++) {
			long so = stoi(A.at(j).at(i));
			string chu = to_string(so);
			A.at(j).at(i) = chu;
		}
	}
}
void XuatMaTran(vector <vector<string> > &A, int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot ; j++) {
			if (j ==cot-1) cout << A[i][j];
			else cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
void Khoangtrang(vector <vector <string> > &A, int hang, int cot) {
	long Max = 0;
	long dodai = 0;
	long vitri = 0;
	string phantu = "";
	Check0(A, hang, cot);
	for (int i = 0; i < cot; i++) {
		for (int j = 0; j < hang; j++) {
			phantu = A.at(j).at(i);
			dodai = phantu.length();
			if (dodai > Max) {
				Max = dodai;
				vitri = j;
			}
		}
		for (int x = 0; x < hang; x++) {
			if (x == vitri) continue;
			string pt = A.at(x).at(i);
			long dai = pt.length();
			string temp = pt.insert(0, (Max - dai), ' ');
			A[x][i] = temp;
		}
		dodai = 0;
		Max = 0;
	}
}
int main()
{
	int r, c;
	cin >> r >> c;
	vector <vector <string> > A;
	NhapMaTran(A, r, c);
	Khoangtrang(A, r, c);
	XuatMaTran(A, r, c);
	return 0;
}
