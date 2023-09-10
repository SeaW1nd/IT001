#include <iostream>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
        int n;
        cin >> n;
        do {
            if (n <= 0 || n > 50) {
                cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
                cin >> n;
            }
        } while (n <= 0 || n > 50);
        if (n>0 && n<=50) {
            int dem = 0;
            int Tong = 0;
            for (int i = 2; ; i++) {
                if (dem == n) break;
                if (isPrime(i) == true) {
                    Tong = Tong + i;
                    dem++;
                }
            }
            cout << "Tong " << n << " so nguyen to dau tien la: " << Tong;
        }
    }
