#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-24
// @problem: The Last Levels (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 i = 0; i < T; ++i) {
        i32 X, Y, Z;
        cin >> X >> Y >> Z;

        i32 B = ((X + 2) / 3) - 1;
        cout << (X * Y) + (Z * B) << endl;
    }

    return 0;
}
