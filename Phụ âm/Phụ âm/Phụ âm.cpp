#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string s;
	int dem = 0;
	cin >> s;
	int Tohop = s.length() - 1;
	//vector <string> nguyenam = {"a","e","i","o","u","w","y"};
	for (int i = 0; i <= Tohop; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'w' || s[i] == 'y') dem++;
	}
	cout << dem;
}
