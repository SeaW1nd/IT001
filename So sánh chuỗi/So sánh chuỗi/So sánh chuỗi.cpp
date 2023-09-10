#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//bool SoSanhChuoi(string a) {
//    //sort(a.begin(), a.end());
//    string temp = string(a.rbegin(),a.rend());
//    if (temp == a) return false;
//    return true;
//}
int main()
{
    int n;
    int biendem;
    biendem = 1;
    string temp;
    cin >> n;
    vector <string> A;
    vector <int> Nho;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        A.push_back(temp);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++) {
        if (i == n - 1) break;
        if (A[i] != A[i + 1]) biendem++;
    }
    cout << biendem;
}
