#include <iostream>
using namespace std;
int main()
{
    string s;
    int dem = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        string temp = s;
        for (int j = i + 1; j <= s.length() - 1; j++) {
            swap(s[i], s[j]);
            if (s != temp) dem++;
            s = temp;
        }
    }
    cout << dem+1;
}
