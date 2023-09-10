#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int so;
    cin >> so;
    // Vẽ hình chữ nhật
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if (i == 0 || i == 3 || j == 0 || j == 5) {
                cout << so << " ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
    // Vẽ tam giác đều
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= 4 - i; j++) cout << " ";
        for (int j = 0; j <= i; j++) {
            if (i == 2 || i == 3 || i == 4) {
                if (j == 0 || j == i ) cout << so << " ";
                else cout << "  ";
            }
            else cout << so << " ";
            }
        cout << endl;
        }
    return 0;
}
