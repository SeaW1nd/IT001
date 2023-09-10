#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float Pi =0;
    for (int i = 0; i <= n; i++) {
        Pi = Pi + (pow(-1, i) / (2 * i + 1));
    }
    float Result = 4 * Pi;
    cout << Result;
    return 0;
}