#include <bits/stdc++.h>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 807A - Is it rated? (Codeforces)
// @url: https://codeforces.com/contest/807/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int competitors; cin >> competitors;

    bool rated = false, ordered = true;

    int initial, final; int previous = 4196;

    while (cin >> initial >> final) {
        rated |= initial != final, ordered &= previous >= final;

        previous = final;
    }

    cout << (rated ? "rated" : (ordered ? "maybe" : "unrated"));

    return 0;
}
