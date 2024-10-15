#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Relativity (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int G, C; read("%i %i", &G, &C);

        const int H = (C * C) / (2 * G);

        write("%i\n", H);
    }

    return 0;
}
