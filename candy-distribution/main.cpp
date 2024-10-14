#include <bits/stdc++.h>
using i16 = int16_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-24
// @problem: Candy Distribution (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i16 T;
    cin >> T;

    for (i16 x = 0; x < T; ++x) {
        i16 N, M;
        cin >> N >> M;

        if (N % M == 0 && (N / M) % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
