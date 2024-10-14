#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int length; cin >> length;

    int array[length];
    for (int& number : array) {
        cin >> number;
    }

    ll moves = 0;
    for (int i = 0; i < length - 1; ++i) {
        ll difference = array[i] - array[i + 1];
        if (difference > 0) {
            array[i + 1] = array[i];
            moves += difference;
        }
    }
    cout << moves;

    return 0;
}
