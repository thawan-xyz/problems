#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-27
// @problem: Airlines (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 i = 0; i < T; ++i) {
        i32 X, N;
        cin >> X >> N;

        i32 A = ((N - X * 100) + 99) / 100;
        cout << max(A, 0) << endl;
    }

    return 0;
}
