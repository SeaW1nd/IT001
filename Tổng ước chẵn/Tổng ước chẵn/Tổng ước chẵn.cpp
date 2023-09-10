#include <iostream>
using namespace std;
#include <cmath>
long Input() {
    long n;
    cin >> n;
    return n;
}
long sum_even_divisor(long n) {
    long Tong = 0;
    long j;
    if (n % 2 != 0) {
        Tong = -1;
        return Tong;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            j = 0;
            if (n % i == 0) {
                j = n / i;
                if (j % 2 == 0 && i % 2 == 0) Tong = Tong + i + j;
                else if (j % 2 == 0 && i % 2 != 0) Tong = Tong + j;
                else if (j % 2 != 0 && i % 2 == 0) Tong = Tong + i;
            }
        }
        return Tong + n;
    }
}
int main()
{
    int n;
	n=Input();
	cout << sum_even_divisor(n);
}
