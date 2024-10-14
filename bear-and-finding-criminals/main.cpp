#include <bits/stdc++.h>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-08-19
// @problem: 680B - Bear and Finding Criminals (Codeforces)
// @url: https://codeforces.com/contest/680/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int cities, initial;
    cin >> cities >> initial;

    array<int> criminals(cities);
    for (auto& number : criminals) {
        cin >> number;
    }

    int caught = criminals[--initial];
    for (int distance = 1; distance < cities; ++distance) {
        int left = initial - distance;
        int right = initial + distance;

        if (left >= 0 && right < cities) {
            if (criminals[left] && criminals[right]) {
                caught += 2;
            }
        }
        else if (left >= 0 && criminals[left]) {
            caught++;
        }
        else if (right < cities && criminals[right]) {
            caught++;
        }
    }
    cout << caught;

    return 0;
}
