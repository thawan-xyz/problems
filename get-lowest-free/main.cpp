#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Get Lowest Free (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int A, B, C; read >> A >> B >> C;

        write << A + B + C - min({A, B, C}) << endl;
    }
    return 0;
}
