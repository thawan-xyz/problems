#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Grade The Steel (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    int T; read("%i", &T);

    while (T--) {
        int H, S, G = 0; float C;
        read("%i %f %i", &H, &C, &S);

        bool
            X = H > 50,
            Y = C < 0.7,
            Z = S > 5600;

        if (X && Y && Z) G = 10;
        else if (X && Y) G = 9;
        else if (Y && Z) G = 8;
        else if (X && Z) G = 7;
        else if (X || Y || Z) G = 6;
        else G = 5;

        write("%i\n", G);
    }
    return 0;
}
