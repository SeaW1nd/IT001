#include <iostream>
using namespace std;
int main()
{
    long n, m, h, w;
    long gap1 = 0;
    cin >> n >> m >> h >> w;
    //if ((n <= w && m <= h) || (n <= h && m <= w)) gap1 = 1;
    if ((n <= h || m <= h) && (n <= w || m <= w)) gap1 = 0;
    while (h < n) {
        if (h >= m) break;
        h = h*2;
        gap1++;
        if (h == n) break;
        if (h < m) {
            h = h * 2;
            gap1++;
        }
    }
    if (w <= n) {
        while (w < m || w < n) {
            if (w >= n) break;
            w = w * 2;
            gap1++;
            if (w == m) break;
            if (w < n) {
                w = w * 2;
                gap1++;
            }
        }
    }
    else {
        while (w < m) {
            if (w >= n && (n!=h || n!=w)) break;
            w = w * 2;
            gap1++;
            if (w == m) break;
            if (w < n) {
                w = w * 2;
                gap1++;
            }
        }
    }
   /* if (w < m && w >= n) {
        while (w < m && w >= n) {
            w = w * 2;
            gap1++;
        }
    }*/
    //cout << n << " " << m << " " << h << " " << w << "\n";
    cout << gap1; 
    return 0;
}

