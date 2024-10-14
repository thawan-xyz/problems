#include <stdio.h>
#define read scanf
#define write printf

// @author: Thawan, 2024-03-14
// @problem: Equalizing Numbers (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int A, B; read("%i %i", &A, &B);

        write("%s\n", ~(A - B) & 1 ? "YES" : "NO");
    }

    return 0;
}
