#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Presents for Cheffina (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read >> T;

    while (T--) {
        int N; read >> N;

        write << N - (N / 5) << endl;
    }
    return 0;
}
