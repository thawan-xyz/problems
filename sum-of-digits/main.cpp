#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-02
// @problem: 102B - Sum of Digits (Codeforces)
// @url: https://codeforces.com/contest/102/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string number;
    cin >> number;

    int transformations = 0;

    while (number.size() != 1) {
        int total = 0;
        for (char character : number) {
            total += character - '0';
        }

        number = to_string(total);
        transformations++;
    }

    cout << transformations;
    return 0;
}
