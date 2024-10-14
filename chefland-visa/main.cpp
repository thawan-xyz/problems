#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-13
// @problem: Chefland Visa (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X[2], Y[2], Z[2]; read("%i %i %i %i %i %i", &X[0], &X[1], &Y[0], &Y[1], &Z[0], &Z[1]);

        write("%s\n", X[0] <= X[1] && Y[0] <= Y[1] && Z[0] >= Z[1] ? "YES" : "NO");
    }

    return 0;
}
