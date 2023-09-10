#include <iostream>
#include <string>
using namespace std;
int main()
{
	string A, B;
	long dem = 0;
	string::size_type start = 0;
	cin >> A >> B;
	while ((start = A.find(B, start)) != string::npos) {
		dem++;
		start = start + B.length();
	}
	cout << dem;
}