#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string exhibitionString; cin >> exhibitionString;

    int previousChar = 0, currentChar = 0; int charDistance = 0, totalRotations = 0;
    for (char exhibitionChar : exhibitionString) {
        currentChar = exhibitionChar - 'a';

        charDistance = abs(currentChar - previousChar);
        totalRotations += min(26 - charDistance, charDistance);

        previousChar = currentChar;
    }
    cout << totalRotations;
    return 0;
}
