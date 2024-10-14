#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-20
// @problem: Sasta Shark Tank (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int A, B;
        cin >> A >> B;

        if ((2 * A) > B) {
            cout << "FIRST" << endl;
        }
        else if ((2 * A) < B) {
            cout << "SECOND" << endl;
        }
        else {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
