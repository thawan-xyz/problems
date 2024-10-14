#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Possible Victory (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int C, O, R; read >> C >> O >> R;

    const int S = ((20 - O) * 36) + R;
    write << (S > C ? "YES" : "NO") << endl;

    return 0;
}
