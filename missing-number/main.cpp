#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll numberOfElements; cin >> numberOfElements;

    ll totalSumOfSequence = numberOfElements * (numberOfElements + 1) / 2;
    ll totalSumOfInput = 0;

    for (int i = 0; i < numberOfElements - 1; ++i) {
        ll currentNumber; cin >> currentNumber;
        totalSumOfInput += currentNumber;
    }

    cout << totalSumOfSequence - totalSumOfInput;
    return 0;
}
