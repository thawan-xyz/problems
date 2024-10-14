#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Good Weather (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int S = 0, R = 0;

        for (int i = 0; i < 7; ++i) {
            int A; read("%i", &A);
            A ? S++ : R++;
        }

        write("%s\n", S > R ? "YES" : "NO");
    }

    return 0;
}
