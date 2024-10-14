#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Equal Integers (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X, Y; read("%i %i", &X, &Y);
        int Z = abs(X - Y);

        int O = X < Y ? Z : (Z + 1) / 2 + (Z & 1);
        write("%i\n", O);
    }
    return 0;
}
