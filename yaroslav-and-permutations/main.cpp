#include <bits/stdc++.h>
#define array vector
#define umap unordered_map
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-18
// @problem: 296A - Yaroslav and Permutations (Codeforces)
// @url: https://codeforces.com/contest/296/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number, length; cin >> length;

    umap<int, int> frequency;
    while (cin >> number) {
        frequency[number]++;
    }

    int highest = 0;
    for (auto& [key, value]: frequency) {
        if (value > highest) highest = value;
    }

    cout << (highest <= ((length + 1) / 2) ? "YES" : "NO") << endl;
    return 0;
}
