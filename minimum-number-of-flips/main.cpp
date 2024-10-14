#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Minimum Number of Flips (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int N, X = 0, Y = 0; read >> N;

        for (int i = 0; i < N; ++i) {
            int A; read >> A;

            A < 0 ? ++X : ++Y;
        }

        const int O = (~N & 1) ? abs(X - Y) / 2 : -1;
        write << O << endl;
    }

    return 0;
}
