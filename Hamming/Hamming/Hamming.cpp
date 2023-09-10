#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	string chuoi1, chuoi2, bien;
	int64_t l1, l2, dem, Hamming, sl;
	Hamming = 0;
	cin >> chuoi1 >> chuoi2;
	l1 = chuoi1.length();
	l2 = chuoi2.length();
	dem = 0;
	sl = l2 - l1;
	if (l1 < l2) { 
		chuoi1.insert(0, sl, '0');
		l1 = chuoi1.length();
	}
		for (int64_t i = l2 - 1; i >= 0; i--) {
			dem++;
			if (chuoi1[i] != chuoi2[i]) {
				Hamming = dem;
			}
		}
	cout << Hamming; 
	return 0;
}

