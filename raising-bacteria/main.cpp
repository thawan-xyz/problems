#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-19
// @problem: 579A - Raising Bacteria (Codeforces)
// @url: https://codeforces.com/contest/579/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number; cin >> number;
    bitset<32> binary(number);

    int total = binary.count();
    cout << total << endl;

    return 0;
}
