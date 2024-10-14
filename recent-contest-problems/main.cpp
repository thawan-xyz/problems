#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Recent Contest Problems (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int N, A = 0, B = 0; read >> N;

        for (int i = 0; i < N; ++i) {
            str C; read >> C;

            C == "START38" ? ++A : ++B;
        }
        write << A << ' ' << B << endl;
    }
    return 0;
}
