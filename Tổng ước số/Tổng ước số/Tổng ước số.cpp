#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long n, k, t;
	k = 0;
	cin >> n;
	for (long i = 1; i <= sqrt(n); i++) {
		if (n % i ==0) {
			int j = n / i;
			if (i == j) {
				k += +i;
			}
			else {
				k += i + j;
			}
		}
	}
	cout << (k-n);
	return 0;
}
