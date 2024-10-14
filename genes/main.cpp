#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-11
// @problem: Genes (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    char F, M; read("%c %c", &F, &M);

    const char C = (F == 'R' || M == 'R') ? 'R' : (F == 'B' || M == 'B') ? 'B' : 'G';
    write("%c", C);

    return 0;
}
