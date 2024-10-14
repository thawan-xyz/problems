#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-21
// @problem: Bus Seat Numbering (CodeChef)
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

        if (N <= 10) {
            cout << "LOWER DOUBLE" << endl;
        }
        else if (N <= 15) {
            cout << "LOWER SINGLE" << endl;
        }
        else if (N <= 25) {
            cout << "UPPER DOUBLE" << endl;
        }
        else {
            cout << "UPPER SINGLE" << endl;
        }
    }

    return 0;
}
