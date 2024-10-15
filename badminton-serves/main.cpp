#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Badminton Serves (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int P; read("%i", &P);

        write("%i\n", (P / 2) + 1);
    }

    return 0;
}
