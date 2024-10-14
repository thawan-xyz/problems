#include <bits/stdc++.h>
#define array vector
#define str string
#define umap unordered_map
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-22
// @problem: Complementary Strand in a DNA (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    umap<char, char> M = {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}
    };

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;

        str S;
        cin >> S;

        for (char& C : S) {
            C = M[C];
        }

        cout << S << endl;
    }

    return 0;
}
