#include <bits/stdc++.h>
#define array vector
#define long long long
using namespace std;

// @author: Thawan Ribeiro, 2024-06-16
// @problem: 1071 - Number Spiral (CSES)
// @url: https://cses.fi/problemset/task/1071

bool is_even(long n) {
    return !(n % 2);
}

long square(long n) {
    return n * n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T; cin >> T;
    for (int i = 0; i < T; ++i) {
        long x, y; cin >> x >> y;

        long r;
        if (x > y) {
            r = is_even(x) ? square(x) - y + 1 : square(x - 1) + y;
        }
        else {
            r = is_even(y) ? square(y - 1) + x : square(y) - x + 1;
        }
        cout << r << '\n';
    }

    return 0;
}
