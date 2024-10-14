#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-13
// @problem: Devendra and Water Sports (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int Z, Y, A, B, C; read("%i %i %i %i %i", &Z, &Y, &A, &B, &C);

        write("%s\n", Z - Y >= A + B + C ? "YES" : "NO");
    }

    return 0;
}
