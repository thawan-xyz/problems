#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Wordle (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        str S, G, R(5, ' '); read >> S >> G;

        for (int i = 0; i < 5; ++i) {
            if (S[i] == G[i]) {
                R[i] = 'G';
            }
            else {
                R[i] = 'B';
            }
        }
        write << R << endl;
    }
    return 0;
}
