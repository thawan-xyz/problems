#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-20
// @problem: Reverse The Number (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        str N;
        cin >> N;

        reverse(all(N));
        cout << stoi(N) << endl;
    }
    return 0;
}
