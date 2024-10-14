#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-25
// @problem: Water Mixing (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 i = 0; i < T; ++i) {
        i32 A, B;
        cin >> A >> B;
        i32 C = B - A;

        i32 X, Y;
        cin >> X >> Y;
        bool Z;

        if (C > 0) {
            Z = X >= C;
        }
        else {
            Z = Y >= -C;
        }

        cout << (Z ? "YES" : "NO") << endl;
    }

    return 0;
}
