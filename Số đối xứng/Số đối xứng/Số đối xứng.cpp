#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string daonguoc = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        daonguoc = daonguoc + s[i];
    }
    if (daonguoc == s) cout << "true";
    else cout << "false";
    return 0;
}