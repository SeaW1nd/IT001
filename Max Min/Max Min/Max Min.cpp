#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int max, min;
	int Max, Min;
	cin >> max >> min;
	Max = ((max + min) + abs(max - min)) / 2;
	Min = ((max + min) - abs(max - min)) / 2;
	cout << "max = " << Max << '\n';
	cout << "min = " << Min;
	
}
