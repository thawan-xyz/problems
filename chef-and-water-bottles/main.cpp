#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-23
// @problem: Chef and Water Bottles (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N, X, K;
        cin >> N >> X >> K;

        cout << min(N, K / X) << endl;
    }

    return 0;
}
