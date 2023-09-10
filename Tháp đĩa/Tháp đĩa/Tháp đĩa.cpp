#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	int temp;
	cin >> N;
	vector <int> FirstTower;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		FirstTower.push_back(temp);
	}
	vector <int> SecondTower;
	vector <int> ThirdTower;
	//First step:
	int t;
	t = FirstTower[0];
	SecondTower.push_back(t);
	FirstTower.erase(FirstTower.begin());
	//Second Step
	for (int i = 0; i < N;i++) {
		int fItem = FirstTower[i + 1];
		int sItem = SecondTower[0];
		if (fItem > sItem) Third
		if (fItem > sItem) Third
	}
	/*for (int t = 1; t < n; t++) {
		if ()
	}*/
}
