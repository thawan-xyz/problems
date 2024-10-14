#include <bits/stdc++.h>
using i16 = int16_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-24
// @problem: X Jumps (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    i16 T;
    cin >> T;
    
    for (i16 i = 0; i < T; ++i) {
        i16 X, Y;
        cin >> X >> Y;

        cout << (X / Y) + (X % Y) << endl;
    }
    
    return 0;
}
