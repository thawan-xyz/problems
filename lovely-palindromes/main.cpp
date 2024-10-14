#include <bits/stdc++.h>
#define array vector
#define u32 unsigned int
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-04
// @problem: 688B - Lovely Palindromes (Codeforces)
// @url: https://codeforces.com/contest/688/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    str number;
    cin >> number;

    u32 length = number.length() << 1;
    str palindrome(length, ' ');

    for (u32 i = 0; i < (length >> 1); ++i) {
        palindrome[i] = number[i];
        palindrome[(length - 1) - i] = number[i];
    }

    cout << palindrome << endl;
    return 0;
}
