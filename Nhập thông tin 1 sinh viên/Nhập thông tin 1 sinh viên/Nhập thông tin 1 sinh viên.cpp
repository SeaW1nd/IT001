#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
#include <string>
void Nhap(SinhVien &A) {
    cin >> A.MASV;
    cin.ignore();
    cin.getline(A.HoTen, 100);
    cin >> A.NgaySinh;
    cin.ignore();
    cin >> A.GioiTinh;
    cin >> A.DiemToan >>A.DiemLy >> A.DiemHoa;
    cin.ignore();
}
void Xuat(SinhVien A) {
    A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa) / 3;
    cout << A.MASV << '\t' << A.HoTen << '\t' << A.NgaySinh << '\t' << A.GioiTinh << '\t' << A.DiemToan << '\t' << A.DiemLy << '\t' << A.DiemHoa << '\t';
    printf("%.3g", A.DTB);
}

int main()
{
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
