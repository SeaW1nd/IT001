#include <iostream>
#include <vector>
using namespace std;
void NhapMaTran(vector<vector<float>> &A, int hang, int cot) {
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
void MaxRow(vector<vector<float>> A, int hang, int cot) {
    for (int i = 0; i < cot; i++) {
        float maxRow = A[0][i];
        for (int j = 0; j < hang; j++) {
            if (A[j][i] > maxRow) maxRow = A[j][i];
        }
        cout << "Gia tri lon nhat tren cot " << i << " la: " << maxRow << endl;
        
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector <float>> A;
    NhapMaTran(A, m, n);
    MaxRow(A, m, n);
    return 0;
}