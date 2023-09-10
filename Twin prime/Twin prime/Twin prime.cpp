#include <iostream>
#include <math.h>
using namespace std;
int lasonguyento(int i) {
	int count = 0;
	bool check = false;
	for (int x = 1; x <= i; x++) {
		if (i % x == 0) count++;
	}
	if (count == 2) check = true;
	return check;
}

int main()
{
	int Lim, count, Tong;
	count = 0;
	Tong = 0;
	cin >> Lim;
	for (int i = 3; i < Lim; i++) {
		if (lasonguyento(i) == true && lasonguyento(i+2) == true && i < Lim && i +2 < Lim) {
			cout << i <<", " << i+2 << endl;
			Tong++;
		}
	}
	cout << "Tong: " << Tong << " cap so sinh doi < " << Lim;
	return 0;
}