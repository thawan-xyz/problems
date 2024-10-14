#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-10-13
// @problem: 129A - Cookies (Codeforces)
// @url: https://codeforces.com/contest/129/problem/A

int main() {
    int N, T = 0, O = 0, E = 0; read("%i", &N);

    for (array<int> A(N); int& a : A) {
        read("%i", &a); T += a;

        a & 1 ? O++ : E++;
    }

    write("%i", T & 1 ? O : E);
    return 0;
}
