#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-13
// @problem: Highest Divisor (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int divisor(const int& x) {
    for (int i = 10; i >= 1; --i) {
        if (x % i == 0) return i;
    }
    return 0;
}

int main() {
    int N; read("%i", &N);
    write("%i\n", divisor(N));
    return 0;
}
