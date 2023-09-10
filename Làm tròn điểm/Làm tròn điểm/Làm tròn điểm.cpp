#include <iostream>
#include <iomanip>
#include <math.h>
#include <sstream>
using namespace std;
int main()
{
	double Min = 100, Minx;
	string du, chu, dacbiet;
	double so, phandu, du2, T3, bien, phandu2;
	double ketqua, sosanh;
	int dem, p, i, h, s, dem3;
	dem = 0;
	Minx = 0;
	i = 0;
	cin >> so >> bien;
	phandu = (so * bien) - int(so * bien);
	if (phandu >=0.5) ketqua = (ceil((so * bien)) / bien);
	else if (phandu < 0.5) ketqua = (floor((so * bien)) / bien);
	if (((so * bien) / bien) > 0 && ((so * bien) / bien) < 1) ketqua = (so);
	//chu = to_string(ketqua);
	//i = 0;
	/*while (chu[i] != '.') {
		dem++;
		i++;
	}
	du2 = ketqua - int(so);
	p = int(du2 * pow(10, 9)) % 10;
	if (p != 0) cout << setprecision(10 - dem) << fixed << ketqua;
	else if (p == 0) {
		if (du2 == 0.0f) cout << setprecision(0) << fixed << ketqua;
		else if (du2 != 0.0f) {
			du = to_string(du2);
			int dem2, h;
			dem2 = 0;
			h = du.length() - 1;
			while (du[h] == '0') {
				dem2++;
				h--;
			}
			cout << setprecision(du.length() - 2 - dem2) << fixed << ketqua;
		}
	}*/
	cout << setprecision(10);
	cout << ketqua;
	return 0;
}
