#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if (d < a || b < c) {
        cout << (b - a) + (d - c) << endl;
    }
    else {
        int x = (a < c) ? a : c;
        int y = (b > d) ? b : d;
        cout << y - x << endl;
    }

    return 0;
}
