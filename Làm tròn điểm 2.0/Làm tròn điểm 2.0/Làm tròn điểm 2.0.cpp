#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
/*int main()
{
	string chu, chu2;
	double so, thuong, Tong, du, Tong2, bien2;
	int dem2, p, h, dem3, bien;
	Tong2 = 0;
	dem2 = 0;
	dem3 = 0;
	Tong = 0;
	p = 0;
	cin >> so >> bien;
	bien2 = bien;
	//thuong = 1 / bien;
	/*for (int i = 0; i < bien; i++) {
		Tong = 0;
		Tong = int(so) + Tong + i * thuong;
		if (Tong < so) Tong2 = Tong;
	}
	if ((int(so * bien + 0.5) % bien) == 0.0f) Tong2 = int(so);
	else if (int(so * bien + 0.5) < bien) {
		Tong2 = ((int(double(so) * bien + 0.5) % bien) / bien2);
	}
	else if (so*bien + 0.5 > int(so)) Tong2 = int(so) + ((int(double(so) * bien + 0.5) % bien)/bien2);
	chu = to_string(Tong2);
	int t = 0;
	while (chu[t] != '.') {
		dem2++;
		t++;
	}
	p = p + int(Tong2 * pow(10, 8)) % 10;
	if (p != 0) cout << setprecision(10 - dem2) << fixed << Tong2; 
	else if (p == 0) {
		du = Tong2 - int(so);
		if (du == 0) cout << setprecision(0) << fixed << Tong2;
		else if (du != 0) {
			chu2 = to_string(du);
			chu2.erase(chu2.begin(),chu2.begin()+dem2 + 1);
			h = chu2.length() - 1;
			while (chu2[h] == '0') {
				if (chu2[h] != '0') break;
				dem3++;
				h--;
			}
			cout << setprecision(chu2.length() - dem3) << fixed << Tong2;
		}
	}
	return 0;
}*/
int main() {
	float a;
	float n, i;
	float sauphay, Min = 100;
	double ketqua;
	double Minx;
	cin >> a >> n;
	sauphay = a - floor(a);
	cout << setprecision(100);
	for (i = 0; i <= n; i++)
		if (abs(sauphay - float(i / n)) <= Min) {
			Min = abs(sauphay - float(i / n));
			Minx = float(i / n);
		}
	cout << setprecision(10);
	ketqua = Minx + floor(a);
	cout << ketqua;

}
