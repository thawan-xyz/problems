#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Cars and Bikes (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int N; read >> N;

        write << (N % 4 != 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
