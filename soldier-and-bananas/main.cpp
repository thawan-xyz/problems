#include <iostream>

using namespace std;

int main() {
    int k, n, w, t = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; ++i) {
        t += k * i;
    }

    if ((t - n) > 0) {
        cout << t - n << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}
