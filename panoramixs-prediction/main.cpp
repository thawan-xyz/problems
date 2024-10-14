#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-17
// @problem: 80A - Panoramix's Prediction (Codeforces)
// @url: https://codeforces.com/contest/80/problem/A

bool is_prime(int x) {
    for (int i = x - 1; i > 1; --i) {
        if (!(x % i)) return false;
    }
    return true;
}

bool are_consecutive_primes(int y, int z) {
    for (int j = y + 1; j < z; ++j) {
        if (is_prime(j)) return false;
    }
    return is_prime(z);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m; cin >> n >> m;
    cout << (are_consecutive_primes(n, m) ? "YES" : "NO") << endl;
    return 0;
}
