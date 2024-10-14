#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 742A - Arpa’s hard exam and Mehrdad’s naive cheat (Codeforces)
// @url: https://codeforces.com/contest/742/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number; cin >> number;

    array<int, 4> sequence = {8, 4, 2, 6};

    int result = number != 0 ? sequence[(number - 1) % 4] : 1;

    cout << result << endl; return 0;
}
