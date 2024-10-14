#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
#define msb(x) (31 - __builtin_clz(x))
using namespace std;

// @author: Thawan, 2024-10-08
// @problem: Binary Battles (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T;
    read("%i", &T);

    while (T--) {
        int N, A, B;
        read("%i %i %i", &N, &A, &B);

        int R = A * msb(N) + B * (msb(N) - 1);
        write("%i\n", R);
    }

    return 0;
}
