#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	string chuoi;
	cin >> chuoi;
	for (int i = 0; i <= chuoi.length() - 1; i++) {
		if (chuoi[i] == toupper(chuoi[i])) chuoi[i] = tolower(chuoi[i]);
		else if (chuoi[i] == tolower(chuoi[i])) chuoi[i] = toupper(chuoi[i]);
	}
	cout << chuoi;
}