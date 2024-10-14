#include <bits/stdc++.h>
#define array vector
#define umap unordered_map
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-02
// @problem: 47B - Coins (Codeforces)
// @url: https://codeforces.com/contest/47/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    umap<char, int> rank = {{'A', 0}, {'B', 0}, {'C', 0}};

    for (int _ = 0; _ < 3; ++_) {
        string relation;
        cin >> relation;

        char sign = relation[1];
        char token = (sign != '<') ? relation[0] : relation[2];

        rank[token]++;
    }

    string order = "XXX";
    order[rank['A']] = 'A';
    order[rank['B']] = 'B';
    order[rank['C']] = 'C';

    if (rank['A'] != rank['B'] &&
        rank['B'] != rank['C'] &&
        rank['C'] != rank['A']) {
        cout << order;
    }
    else {
        cout << "Impossible";
    }

    return 0;
}
