#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int m;
	int temp;
	int dem = 0;
	cin >> m;
	vector <int> A;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	int Max = A[0];
	for (int i = 1; i < m; i++) {
		if (A[i] > Max) Max = A[i];
	}
	for (int i = 0; i < m; i++) {
		if (A[i] == Max) dem++;
	}
	cout << Max << endl;
	cout << dem;
}
