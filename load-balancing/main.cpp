#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int farmMatrix(int numCows, int matrixOrder, set<int>& verticalFencePositions, set<int>& horizontalFencePositions, vector<pair<int, int>>& cowsPosition) {
    int maxCows = numCows; int bestOutcome = (numCows / matrixOrder) + 1;
    for (auto i: verticalFencePositions) {
        for (auto j: horizontalFencePositions) {
            int topLeft = 0, topRight = 0, bottomLeft = 0, bottomRight = 0;
            for (auto [x, y]: cowsPosition) {
                if (x < i && y < j) {
                    topLeft++;
                }
                else if (x > i && y < j) {
                    topRight++;
                }
                else if (x < i && y > j) {
                    bottomLeft++;
                }
                else {
                    bottomRight++;
                }
            }
            maxCows = min(maxCows, max({topLeft, topRight, bottomLeft, bottomRight}));

            if (maxCows <= bestOutcome) {
                return maxCows;
            }
        }
    }

    return maxCows;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int numCows, matrixOrder;
    cin >> numCows >> matrixOrder;

    int x, y; vector<pair<int, int>> cowsPosition(numCows); set<int> verticalFencePositions; set<int> horizontalFencePositions;
    for (int i = 0; i < numCows; ++i) {
        cin >> x >> y; cowsPosition[i] = {x - 1, y - 1};
        verticalFencePositions.insert(x); horizontalFencePositions.insert(y);
    }

    cout << farmMatrix(numCows, matrixOrder, verticalFencePositions, horizontalFencePositions, cowsPosition);
    return 0;
}
