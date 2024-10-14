#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-14
// @problem: Construct N (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int N; read("%i", &N);

        write("%s\n", ~N & 1 || N >= 7 ? "YES" : "NO");
    }

    return 0;
}
