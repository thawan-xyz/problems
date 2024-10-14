#include <bits/stdc++.h>
#define array vector
#define umap unordered_map
#define long long long
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-02
// @problem: 227B - Effective Approach (Codeforces)
// @url: https://codeforces.com/contest/227/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numbers;
    cin >> numbers;

    umap<int, int> position;

    for (int index = 0; index < numbers; ++index) {
        int number;
        cin >> number;

        position[number] = index;
    }

    int queries;
    cin >> queries;

    long forward = 0;
    long backward = 0;

    for (int _ = 0; _ < queries; ++_) {
        int query;
        cin >> query;

        forward += position[query] + 1;
        backward += numbers - position[query];
    }

    cout << forward << ' ' << backward << endl;
    return 0;
}
