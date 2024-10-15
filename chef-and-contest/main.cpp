#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Chef and Contest (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int X, Y, P, Q; read("%i %i %i %i", &X, &Y, &P, &Q);

        const int CHEF = X + (10 * P);
        const int CHEFINA = Y + (10 * Q);

        write("%s\n", CHEF == CHEFINA ? "DRAW" : CHEF < CHEFINA ? "CHEF" : "CHEFINA");
    }
    
    return 0;
}
