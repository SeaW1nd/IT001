#include <iostream>
using namespace std;
int main()
{
	long long n;
	long long Tong;
	cin >> n;
	if (n % 2 == 0) {
		Tong = 2;
		for (int i = 4; i <= n; i = i + 2) {
			Tong = Tong*i;
		}
	}
	else {
		Tong = 1;
		for (int i = 3; i <= n; i = i + 2) {
			Tong = Tong * i;
		}
	}
	cout << Tong;
}
