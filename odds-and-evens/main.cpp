#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Odds and Evens (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A, B; read("%i %i", &A, &B);

        const int C = A + B;

        write("%s\n", C & 1 ? "ALICE" : "BOB");
    }

    return 0;
}
