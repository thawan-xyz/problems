#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-04
// @problem: Degree of Polynomial (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    for (int x = 0; x < T; ++x) {
        int N, D = -1; read >> N;

        for (int i = 0; i < N; ++i) {
            int A; read >> A;

            if (A != 0) {
                D = i;
            }
        }
        write << D << endl;
    }

    return 0;
}
