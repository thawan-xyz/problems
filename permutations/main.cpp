#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    if (N > 1 && N < 4) {
        cout << "NO SOLUTION";
    }
    else {
        for (int e = 0, o = -1, k = 0; k < N; ++k) cout << (k < (N / 2) ? e += 2 : o += 2) << (k != N - 1 ? " " : "");
    }

    return 0;
}
