#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-20
// @problem: Good Program (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int x = 0; x < T; ++x) {
        int N;
        cin >> N;

        if ((N % 4) == 0) {
            cout << "GOOD" << endl;
        }
        else {
            cout << "NOT GOOD" << endl;
        }
    }

    return 0;
}
