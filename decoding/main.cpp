#include <bits/stdc++.h>
#define array vector
#define u16 unsigned short
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-04
// @problem: 746B - Decoding (Codeforces)
// @url: https://codeforces.com/contest/746/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 length;
    cin >> length;

    str encoded, decoded(length, ' ');
    cin >> encoded;

    u16 l = 0, r = length - 1;
    for (u16 i = 1; i <= length; ++i) {
        if (~i & 1) {
            decoded[l++] = encoded[length - i];
        }
        else {
            decoded[r--] = encoded[length - i];
        }
    }

    cout << decoded << endl;
    return 0;
}
