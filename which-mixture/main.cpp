#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str const char*
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Which Mixture (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A, B; read("%i %i", &A, &B);

        str C = "SOLUTION";
        if (A == 0) C = "LIQUID";
        else if (B == 0) C = "SOLID";
        write("%s\n", C);
    }

    return 0;
}
