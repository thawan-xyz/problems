#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-21
// @problem: Maximise the Tastiness (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int x = 0; x < T; ++x) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        cout << max({A, B}) + max({C, D}) << endl;
    }

    return 0;
}
