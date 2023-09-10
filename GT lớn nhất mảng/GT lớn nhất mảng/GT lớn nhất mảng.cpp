#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a;
	int temp;
	cin >> a;
	vector <int> A;
	for (int i = 0; i < a; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	sort(A.rbegin(), A.rend());
	int Max = A[0];
	int dem = 0;
	for (int i = 0; i < a; i++) {
		if (A[i] == Max) dem++;
	}
	cout << Max << endl;
	cout << dem;
	return 0;
}
