#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long H_index(vector <long> a, long n) {
	for (int i = 0; i < a.size();) {
		if (a[i] < n) {
			n--;
			i++;
			continue;
		}
		if (a[i] >= n) return n;
		}
}
int main()
{
	long n, temp;
	cin >> n;
	vector <long> A;
	for (long i = 0; i < n; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	sort(A.begin(),A.end());
	long m = A[A.size()-1];
	if (n < m) cout << H_index(A, n);
	else cout << H_index(A, m);
	return 0;
}