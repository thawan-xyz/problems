#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-20
// @problem: Qualify the Round (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int X;
        cin >> X;

        int A, B;
        cin >> A >> B;

        if (X <= (A + (2 * B))) {
            cout << "QUALIFY" << endl;
        }
        else {
            cout << "NOTQUALIFY" << endl;
        }
    }

    return 0;
}
