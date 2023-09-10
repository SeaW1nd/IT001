#include <iostream>
#include <vector>
using namespace std;
void NhapMaTran(vector <vector<float>>& A, int hang, int cot) {
    float temp;
    for (int i = 0; i < hang; i++) {
        vector <float> row;
        for (int j = 0; j < cot; j++) {
            cin >> temp;
            row.push_back(temp);
        }
        A.push_back(row);
        row.clear();
    }
}
void TongMaTran(vector <vector<float>> &A, vector <vector<float>> &B, int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            A[i][j] = A[i][j] + B[i][j];
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector <float>> A;
    NhapMaTran(A, m, n);
    int m1, n1;
    cin >> m1 >> n1;
    vector <vector <float>> B;
    NhapMaTran(B, m1, n1);
    TongMaTran(A, B, m1, n1);
    return 0;
}