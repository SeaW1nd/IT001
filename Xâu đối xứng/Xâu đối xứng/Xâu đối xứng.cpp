#include <iostream>
using namespace std;
int main()
{
	string chuoi;
	bool a;
	cin >> chuoi;
	for (int i = 0; i < chuoi.length() - 1;) {
		for (int j = chuoi.length() - 1; j != 0;) {
			if (chuoi[i] == chuoi[j]) {
				i++;
				j--;
				if (i == j || j - i == 1) {
					a = false;
					cout << "YES";
				}
			}
			else if (chuoi[i] != chuoi[j]) {
				a = true;
				cout << "NO";
				break;
			}
		}
		if (a == true) break;
		if (a == false) break;
		}
	return 0;
	}
	//if (a == false) cout << "YES";
