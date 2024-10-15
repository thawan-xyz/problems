#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Which Division (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int R; read("%i", &R);

        write("%i\n", R < 1600 ? 3 : R < 2000 ? 2 : 1);
    }

    return 0;
}
