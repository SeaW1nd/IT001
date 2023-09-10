#include <iostream>
using namespace std;
int candle(int candles, int makeNew) {
    int nen, thua;
    nen = candles;
    thua = 0;
    nen = candles / makeNew;
    thua = candles - makeNew * nen;


}
int main()
{
    int candles, makeNew;
    cin >> candles >> makeNew;
    cout << candle(candles, makeNew);
}
