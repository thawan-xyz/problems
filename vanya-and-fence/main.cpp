#include <iostream>
using namespace std;

int main() {
    int numFriends, fenceHeight;
    cin >> numFriends >> fenceHeight;

    int friendHeight, roadLength = 0;
    for (int i = 0; i < numFriends; ++i) {
        cin >> friendHeight;
        if (friendHeight > fenceHeight) {
            roadLength += 2;
        }
        else {
            roadLength += 1;
        }
    }

    cout << roadLength;
    return 0;
}
