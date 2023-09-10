#include <iostream>
using namespace std;
int main()
{
	int a[100000];
	bool dapan = false;
	int n, x, tim;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> x;
	for (int y = 1; y <= n; y++) {
		tim = x - a[y];
		for (int x = y + 1; x <= n; x++) {
			if (a[x] == tim) {
				cout << "YES";
				dapan = true;
				break;
			}
			}
		if (dapan == true) break;
		}
		if (dapan == false) cout << "NO";
		return 0;
	}
