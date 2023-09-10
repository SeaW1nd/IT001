#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	int t;
	bool congtac = false;
	cin >> t;
	long long a[1000];
	for (int i = 1; i <= t; i++) cin >> a[i];
	for (int i = 1; i <= t; i++) {
		if (a[i] == 1) cout << -1 << " " << -1 << endl;
		else {
			long long Half = 2 * a[i];
			long long n = 0;
			for (long long m = sqrt(Half); m >= 1; m--) {
				if (m > 0 && ((Half - m - 1) % (2 * m + 1) == 0)) {
					long long Sosanh = max(m, n) - min(m, n);
					n = (Half - m - 1) / (2 * m + 1);
					long long Hieu = max(m, n) - min(m, n);
					if (Hieu <= Sosanh) continue;
					else {
						cout << min(m, n) << " " << max(m, n) << endl;
						break; 
					}
					//break;
				}
				else if ((n == 0 && m == 1)) {
					cout << -1 << " " << -1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}