#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-17
// @problem: Water Filling (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;

        if (B1 + B2 + B3 > 1) {
            cout << "NOT NOW" << endl;
        }
        else {
            cout << "WATER FILLING TIME" << endl;
        }
    }

    return 0;
}
