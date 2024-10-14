#include <bits/stdc++.h>
using u16 = uint16_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-24
// @problem: Fill Candies (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 T;
    cin >> T;

    for (u16 x = 0; x < T; ++x) {
        u16 N, K, M;
        cin >> N >> K >> M;
        
        cout << ((N + (M - 1)) / M + (K - 1)) / K << endl;
    }

    return 0;
}
