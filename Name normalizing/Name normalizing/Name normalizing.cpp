#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	string chuoi;
	getline(cin, chuoi);
	int n;
	n = 0;
	while(chuoi[0] == ' ') {
		chuoi.erase(chuoi.begin()+0);
	}
	chuoi[0] = toupper(chuoi[0]);
	for (int i = 1; i <= chuoi.length() - 1; i++) {
		//if (chuoi[i] = 32) i++;
		//if (chuoi[i] == toupper(chuoi[i]) && chuoi[i - 1] == 32 && (chuoi[i+1] >='a' && chuoi[i+1] <='Z')) i++;
		if (chuoi[i] == toupper(chuoi[i])) chuoi[i] = tolower(chuoi[i]);
	   // else if (chuoi[i] == tolower(chuoi[i])) chuoi[i] = toupper(chuoi[i]);
	}
	for (int i = 1; i <= chuoi.length() - 1; i++) {
		if (chuoi[i-1] == ' ' && (chuoi[i] >= 'a' && chuoi[i] <= 'z')) chuoi[i] = toupper(chuoi[i]);
		else if (chuoi[i-1] == ' ' && (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) i++;
	}
	cout << chuoi;
}
