#include <iostream>
using namespace std;
long result(long a, long b) {
    long Tong = (a - 1) * (b - 1);
    return Tong;
}
int main()
{
    long n, m;
    cin >> n >> m;
    cout << result(n, m);
    return 0;
}
