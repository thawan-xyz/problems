#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int numElements;
    cin >> numElements;

    vector<int> xValues (numElements);
    vector<int> yValues (numElements);

    for (int &x : xValues) {
        cin >> x;
    }
    for (int &y : yValues) {
        cin >> y;
    }

    int maxDistance = 0;
    for (int i = 0; i < numElements; ++i) {
        for (int j = i + 1; j < numElements; ++j) {
            maxDistance = max(maxDistance, int(pow(xValues[i] - xValues[j], 2) + pow(yValues[i] - yValues[j], 2)));
        }
    }
    cout << maxDistance << "\n";
    return 0;
}
