#include <iostream>
using namespace std;

pair<int, int> numberOne() {
    int number;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> number;
            if (number) {
                return {i, j};
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    auto [x, y] = numberOne();

    int moves = 0;
    while (x != 3) {
        x = x < 3 ? x + 1 : x - 1;
        moves++;
    }
    while (y != 3) {
        y = y < 3 ? y + 1 : y - 1;
        moves++;
    }

    cout << moves;
    return 0;
}
