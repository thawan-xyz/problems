#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Id and Ship (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    map<char, str> S = {
        {'B', "BATTLESHIP"},
        {'C', "CRUISER"},
        {'D', "DESTROYER"},
        {'F', "FRIGATE"}
    };

    while (T--) {
        char C; read >> C;
        write << S[C & '_'] << endl;
    }

    return 0;
}
