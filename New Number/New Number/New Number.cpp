#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n, Max;
	long t, p, l, d, chu;
	cin >> n;
	p = t = 0;
	l = n.length();
	while (p < l) {
		t += n[p];
		p++;
	}
	d = t % 3;
	for (p = 0; p < l && (n[p] + 3 - d > '9'); p++);
	//Nếu không tìm được số để tăng:
	if (p >= l) {
		n[l - 1] -= (d ==0) ? 3 : d;
		Max = n;
	}
	// Nếu tìm được số để tăng:
	else {
		chu = n[p];
		Max = n;
		for (long y = 1;y < 5; y++) {
			n[p] = (chu + (3*y - d));
			if (n[p] > '9') break;
			Max = n;
			if(n > Max) Max = n;
		}
		}
	cout << Max;
}