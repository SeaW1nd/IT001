#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	float a;
	float apsuat;
	cin >> a;
	apsuat = a * 0.453592/(pow(2.54,2));
	cout << apsuat;
	return 0;
}
