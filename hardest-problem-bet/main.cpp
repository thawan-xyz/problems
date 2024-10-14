#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Hardest Problem Bet (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A, B, C; read("%i %i %i", &A, &B, &C);
        const int M = min({A, B, C});

        if (M == A) {
            write("DRAW\n");
        }
        else if (M == B) {
            write("BOB\n");
        }
        else if (M == C) {
            write("ALICE\n");
        }
    }
    return 0;
}
