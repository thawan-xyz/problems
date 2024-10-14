#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;

    int numYears = 0;
    while (limakWeight <= bobWeight) {
        limakWeight *= 3;
        bobWeight *= 2;
        numYears += 1;
    }
    cout << numYears;
    return 0;
}
