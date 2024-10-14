#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str const char*
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Mileage Matters (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int N; float X, Y, A, B;
        read("%i %f %f %f %f", &N, &X, &Y, &A, &B);

        float P = X / A, D = Y / B;
        str R;

        if (P < D) {
            R = "PETROL";
        }
        else if (P > D) {
            R = "DIESEL";
        }
        else {
            R = "ANY";
        }

        write("%s\n", R);
    }

    return 0;
}
