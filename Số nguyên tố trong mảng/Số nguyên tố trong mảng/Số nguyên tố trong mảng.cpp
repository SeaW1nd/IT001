#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	int m, dem =0;
	int temp;
	int congtac;
	vector <int> A;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < m; i++) {
		if (isPrime(A[i]) == true && A[i]>1) {
			cout << A[i] << " ";
			dem++;
		}
	}
	if (dem == 0) cout << 0;
	return 0;
}
