#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-18
// @problem: [ABC353] A - Buildings (AtCoder)
// @url: https://atcoder.jp/contests/abc353

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int B, P = -1;
    cin >> B;

    for (int i = 2; i <= N && P == -1; ++i) {
        int H;
        cin >> H;

        if (H > B) {
            P = i;
        }
    }

    cout << P << endl;
    return 0;
}
