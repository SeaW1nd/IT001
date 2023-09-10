#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	if (s == "") cout << "Chuoi rong";
	else {
		reverse(s.begin(), s.end());
		cout << s;
	}
	return 0;
}