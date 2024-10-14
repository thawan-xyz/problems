#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Complete the Credits (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int X; read >> X;

        if (X < 35) {
            write << "UNDERLOAD" << endl;
        }
        else if (X > 65) {
            write << "OVERLOAD" << endl;
        }
        else {
            write << "NORMAL" << endl;
        }
    }
    return 0;
}
