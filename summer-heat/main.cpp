#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Summer Heat (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A[2], B[2]; read("%i %i %i %i", &A[0], &B[0], &A[1], &B[1]);
        write("%i\n", A[1] / A[0] + B[1] / B[0]);
    }

    return 0;
}
