#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*unsigned long long nho(unsigned long long a) {
    string chu = to_string(a);
    long long chuso = a / (pow(10, chu.length() - 1));
    long long lastnum = chu[chu.length() - 1] - '0';
    for (long long x = (a < 10) ? 10 : pow(10,chu.length()-1) * (chuso + 1); x <= a * 10; x = x + 10) {
        if ((x-a) % lastnum == 0) {
            a = x / 10;
            break;
        }
    }
    return a;
}
int main()
{
    unsigned long long a[100000];
    string chu;
    long long t, min;
    cin >> t;
    for (int i = 1; i <= t; i++) cin >> a[i];
    for (int i = 1; i <= t; i++) {
        if (a[i] < 10) {
            min = a[i];
            a[i] = nho(a[i]);
            while (min > a[i]) {
                min = a[i];
                a[i] = nho(a[i]);
            }
        }
        else if (a[i] >= 10) {
            if (a[i] % 10 == 0) {
                chu = to_string(a[i]);
                a[i] = a[i] / pow(10, chu.length() - 1);
                min = a[i];
                a[i] = nho(a[i]);
                while (min > a[i]) {
                    min = a[i];
                    a[i] = nho(a[i]);
                }
            }
            else if (a[i] % 10 != 0) {
                min = a[i];
                a[i] = nho(a[i]);
                while (min > a[i]) {
                    min = a[i];
                    a[i] = nho(a[i]);
                }
            }
        }
    }
    for (long long z = 1; z <= t; z++) cout << a[z] << endl;
    return 0;
}*/
unsigned long long nho(unsigned long long a) {
    for (int x = 10; x <= a * 10; x = x + 10) {
        if (x % a == 0) a = x / 10;
    }
    return a;
}
unsigned long long Lon(unsigned long long a, unsigned long long b) {
    string chu = to_string(a);
    int firstNum = (chu[0] - '0') + 1;
    for (int x = 10*firstNum; x <= a * 10; x = x + 10) {
        if ((x - a) % b == 0) a = x / 10;
    }
    return a;
}
int main()
{
    unsigned long long a[100000];
    string chu;
    int t, min, b;
    cin >> t;
    for (int i = 1; i <= t; i++) cin >> a[i];
    for (int i = 1; i <= t; i++) {
        if (a[i] < 10) {
            min = a[i];
            a[i] = nho(a[i]);
            while (min > a[i]) {
                min = a[i];
                a[i] = nho(a[i]);
            }
        }
        else if (a[i] >= 10) {
            if (a[i] % 10 == 0) {
                chu = to_string(a[i]);
                a[i] = a[i] / pow(10, chu.length() - 1);
                min = a[i];
                a[i] = nho(a[i]);
                while (min > a[i]) {
                    min = a[i];
                    a[i] = nho(a[i]);
                }
            }
            else if (a[i] % 10 != 0) {
                b = a[i] % 10;
                min = a[i];
                a[i] = Lon(a[i],b);
                while (min > a[i]) {
                    min = a[i];
                    a[i] = nho(a[i]);
                }
            }
        }
    }
    for (int z = 1; z <= t; z++) {
        cout << a[z] << endl;
    }
    return 0;
}
