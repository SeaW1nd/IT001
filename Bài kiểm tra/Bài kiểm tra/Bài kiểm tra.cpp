#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int n, k, p, q;
	int hang, vitri, soban, hang2;
	int t = 0;
	cin >> n >> k >> p >> q;
	soban = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
	if (k % 2 == 0) {
		vitri = q;
		if (p == 1) hang = 1 + (k / 2);
		else hang = p - (k / 2);
		if (hang <= 0) hang = p + (k / 2);
	}
	else if (k % 2 != 0) {
		vitri = (q == 1) ? 2 : 1;
		//x = k / 2;
		if (p == 1 && q == 2) hang = 1 + (k / 2) + 1;
		else if (p == 1 && q == 1) hang = 1 + (k / 2);
		else if ((p % 2 != 0 || p % 2 == 0) && q == 1) {
			hang = p - (k / 2) - 1;
			hang2 = p + (k / 2);
			if (hang < hang2 && hang >= 1) hang = hang;
			else hang = hang2;
		}
		else if ((p % 2 != 0 || p % 2 == 0) && q == 2) {
			hang = p - (k / 2);
			hang2 = p + (k / 2) + 1;
			if ((hang < hang2 && hang >= 1)) hang = hang;
			else hang = hang2;
		}
	}
	if (hang > soban || hang <= 0 || hang * 2 - 2 + vitri > n) cout << -1;
	else cout << hang << " " << vitri;
	return 0;
}
