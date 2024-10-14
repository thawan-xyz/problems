#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-25
// @problem: It is My Serve (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 x = 0; x < T; ++x) {
        i32 A, B;
        cin >> A >> B;

        i32 C = (A + B) % 4;

        if (C <= 1) {
            cout << "ALICE" << endl;
        }
        else {
            cout << "BOB" << endl;
        }
    }

    return 0;
}
