#include <iostream>

using namespace std;

int main() {
    int n, p, v, t, s = 0;

    cin >> n;
    while (n != 0) {
        cin >> p >> v >> t;
        if ((p + v + t) > 1) {
            ++s;
        }
        --n;
    }
    cout << s << endl;

    return 0;
}
