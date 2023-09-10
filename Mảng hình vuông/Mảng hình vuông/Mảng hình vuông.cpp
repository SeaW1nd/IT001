#include <iostream>
using namespace std;
int64_t MuNhanh(float x, int64_t n) {
    if (n == 0) return 1;
    else if (n % 2 != 0) return MuNhanh(x, n - 1);
    int64_t so = MuNhanh(x, n / 2);
    return so * so;
}
int main()
{
    float n;
    int64_t x, dem=0;
    int64_t Tong = 0;
    cin >> x >> n;
    for (float i = n;dem<=x;i=i*2) {
        Tong = Tong + MuNhanh(i, 2);
        dem++;
    }
    int64_t Result = Tong % int(pow(10, 9) + 7);
    cout << Result;
    return 0;
}