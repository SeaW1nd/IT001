#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    string chu;
    int x;
    long so = 0;
    cin >> n;
    chu = n;
    for (int i = 0; i <= n.length()-1; i++) {
        so = (n[i]-'0') + so;
    }
    cout << so << "\n";
    for (int i = 0; i <= n.length() - 1;) {
        if (n[i] == '9') {
            i++;
            }
        else if(n[i] <'9') {
            x = i;
            cout << x;
            break;
        }
    }
    /*if (so % 3 == 0) {
        for (int i = 0; i <= n.length()-1; i++) {
            /*if (n[i] > '3' && n[i] <= '6') {
                n[i] = n[i] + 3;
                break;
            }
            if (n[i] >= '1'&& n[i] <= '3') {
                n[i] = n[i] + 6;
                break;
            }
            if (n[i] == '0') {
                n[i] = n[i] + 9;
                break;
            } 
        }

    }
    if (so % 3 == 1) {
        for (int i = 0; i <= n.length() - 1; i++) {
            if (n[i] > '4' && n[i] <= '7') {
                n[i] = n[i] + 2;
                break;
            }
            if (n[i] >= '1' && n[i] <= '4') {
                n[i] = n[i] + 5;
                break;
            }
            if (n[i] == '0') {
                n[i] = n[i] + 8;
                break;
            }
        }
    }
    if (so % 3 == 2) {
        for (int i = 0; i <= n.length() - 1; i++) {
            if (n[i] >'5' && n[i] <= '8') {
                n[i] = n[i] + 1;
                break;
            }
            if (n[i] > '2' && n[i] <= '5') {
                n[i] = n[i] + 4;
                break;
            }
            if (n[i] <= '2') {
                n[i] = n[i] + 7;
                break;
            }
        }
    }
    if (chu == n && so % 3 == 0) n[n.length() - 1] = n[n.length() - 1] - 3;
    if (chu == n && so % 3 == 1) n[n.length() - 1] = n[n.length() - 1] - 1;
    if (chu == n && so % 3 == 2) n[n.length() - 1] = n[n.length() - 1] - 2;
    cout << n;*/
    return 0;
}
