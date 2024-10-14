#include <bits/stdc++.h>
#define array vector
#define uset unordered_set
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-17
// @problem: 225A - Dice Tower (Codeforces)
// @url: https://codeforces.com/contest/225/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number; cin >> number;
    string result = "YES";

    int face, left, right; cin >> face;
    while (cin >> left >> right) {
        uset<int> dice = {1, 2, 3, 4, 5, 6};

        uset<int> erase = {face, left, 7 - left, right, 7 - right};
        for (auto side : erase) dice.erase(side); face = *dice.begin();

        if (dice.size() != 1) result = "NO";
    }

    cout << result << endl;
    return 0;
}
