#include <bits/stdc++.h>
#define all(x) x.rbegin(), x.rend()
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: The Block Game (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        str N; read >> N;
        str R(all(N));

        write << (N == R ? "WINS" : "LOSES") << endl;
    }

    return 0;
}
