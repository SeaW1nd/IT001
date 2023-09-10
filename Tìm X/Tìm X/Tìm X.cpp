#include <iostream>
using namespace std;
int main()
{
	int a[100000], n, tim, dem;
	dem = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> tim;
	for (int i = 1; i <= n; i++) {
		if (a[i] == tim) cout << i << " ";
		if (a[i] != tim) dem++;
		if (dem == n) cout << "NO";
	}
	return 0;
}
