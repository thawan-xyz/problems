#include <iostream>
#include <array>

using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    array<int, 6> milk = {};

    for (int i = 0; i < 6; ++i) {
        cin >> milk[i] >> milk[++i];
    }

    for (int i = 0, j = 0; i < 100; i += 1, j += 2) {
        if (milk[(j + 1) % 6] + milk[(j + 3) % 6] <= milk[(j + 2) % 6]) {
            milk[(j + 3) % 6] = milk[(j + 1) % 6] + milk[(j + 3) % 6];
            milk[(j + 1) % 6] = 0;
        }
        else {
            milk[(j + 1) % 6] = (milk[(j + 1) % 6] + milk[(j + 3) % 6]) - milk[(j + 2) % 6];
            milk[(j + 3) % 6] = milk[(j + 2) % 6];
        }
    }

    cout << milk[1] << endl;
    cout << milk[3] << endl;
    cout << milk[5] << endl;
    return 0;
}