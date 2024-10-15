#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Car Choice (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X[2], Y[2]; read("%i %i %i %i", &X[0], &X[1], &Y[0], &Y[1]);
        float C[2]; C[0] = 1.0 * Y[0] / X[0], C[1] = 1.0 * Y[1] / X[1];

        write("%i\n", C[0] == C[1] ? 0 : C[0] < C[1] ? -1 : 1);
    }

    return 0;
}
