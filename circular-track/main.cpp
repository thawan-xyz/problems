#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Circular Track (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A, B, M; read("%i %i %i", &A, &B, &M);

        write("%i\n", min(abs(A - B), M - abs(A - B)));
    }
    return 0;
}
