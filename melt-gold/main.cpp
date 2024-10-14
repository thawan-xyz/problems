#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Melt Gold (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X, Y, Z = 0; read("%i %i", &X, &Y);

        while (X > Y) Y += ++Z;

        write("%i\n", Z);
    }

    return 0;
}
