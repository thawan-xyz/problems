#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-18
// @problem: Problems in your to-do list (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int N, P = 0;
        cin >> N;

        for (int i = 0; i < N; ++i) {
            int D;
            cin >> D;

            if (D >= 1000) {
                P++;
            }
        }
        cout << P << endl;
    }

    return 0;
}
