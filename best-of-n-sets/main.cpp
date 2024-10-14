#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Best of N Sets (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X, Y; read("%i %i", &X, &Y);

        const int Z = 2 * max(X, Y) - 1;
        write("%i\n", Z);
    }

    return 0;
}
