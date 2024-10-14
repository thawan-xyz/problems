#include <bits/stdc++.h>
#define array vector
#define isEven(x) (~(x) & 1)
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-17
// @problem: Mahasena (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int totalSoldiers;
    cin >> totalSoldiers;

    int luckySoldiers = 0;
    int unluckySoldiers = 0;

    for (int _ = 0; _ < totalSoldiers; ++_) {
        int soldierWeapons;
        cin >> soldierWeapons;

        if (isEven(soldierWeapons)) {
            luckySoldiers++;
        }
        else {
            unluckySoldiers++;
        }
    }

    if (luckySoldiers > unluckySoldiers) {
        cout << "READY FOR BATTLE" << endl;
    }
    else {
        cout << "NOT READY" << endl;
    }

    return 0;
}
