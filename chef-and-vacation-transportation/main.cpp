#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-13
// @problem: Chef and Vacation Transportation (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X, Y, Z; read("%i %i %i", &X, &Y, &Z);

        write("%s\n", X + Y == Z ? "EQUAL" : X + Y < Z ? "PLANEBUS" : "TRAIN");
    }

    return 0;
}
