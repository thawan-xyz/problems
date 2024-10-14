#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string dnaString; cin >> dnaString;

    char currentChar = 'X'; int currentLength = 0;
    int longestLength = 0;

    for (char dnaChar : dnaString) {
        if (currentChar != dnaChar) {
            currentChar = dnaChar;
            currentLength = 1;
        }
        else {
            currentLength++;
        }

        if (currentLength > longestLength) longestLength = currentLength;
    }

    cout << longestLength;
    return 0;
}
