#include <iostream>
#include <cctype>
using namespace std;
int linearSearch(int a[], int n, int x) {
	int i = 0; a[n] = x;
	while (a[i] != x) 
		i++;
	if (i < n) return i;
	else return -1;
}
int main() {
	
	return 0;
}

 