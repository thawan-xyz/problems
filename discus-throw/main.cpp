#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-21
// @problem: Discus Throw (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    cin >> T;
    
    for (int x = 0; x < T; ++x) {
        int A, B, C;
        cin >> A >> B >> C;
        
        cout << max({A, B, C}) << endl;
    }
    
    return 0;
}
