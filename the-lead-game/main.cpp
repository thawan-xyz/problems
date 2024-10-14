#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-07
// @problem: The Lead Game (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int A = 0;
    int B = 0;

    char W = '0';
    int M = 0;

    while (N--) {
        int X, Y;
        cin >> X >> Y;

        A += X;
        B += Y;

        if (A - B > M) {
            W = '1';
            M = A - B;
        }
        else if (B - A > M) {
            W = '2';
            M = B - A;
        }
    }

    cout << W << ' ' << M << endl;
    return 0;
}
