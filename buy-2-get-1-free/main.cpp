#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Buy 2 Get 1 Free (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int N, X; read >> N >> X;

        write << (N - (N / 3)) * X << endl;
    }

    return 0;
}
