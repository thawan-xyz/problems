#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-21
// @problem: Elections in Chefland (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int k = 0; k < T; ++k) {
        int N, X, R = 0;
        cin >> N >> X;

        for (int i = 0; i < N; ++i) {
            int A;
            cin >> A;

            if (A >= X) {
                R++;
            }
        }
        cout << R << endl;
    }
    return 0;
}
