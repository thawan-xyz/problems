#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Smallest Numbers of Notes (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int N, X = 0; read("%i", &N);
        const int R[6] = {1, 2, 5, 10, 50, 100};

        for (int i = 5; N > 0; --i) {
            X += N / R[i];
            N %= R[i];
        }

        write("%i\n", X);
    }
    return 0;
}
