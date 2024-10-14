#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int numberOfFriends; cin >> numberOfFriends;
    vector<int> presentGivenToFriend(numberOfFriends + 1);

    for (int receiverIndex = 1, giverIndex = 1; receiverIndex <= numberOfFriends; ++receiverIndex) {
        cin >> giverIndex; presentGivenToFriend[giverIndex] = receiverIndex;
    }

    for (int friendIndex = 1; friendIndex <= numberOfFriends; ++friendIndex) {
        cout << presentGivenToFriend[friendIndex] << (friendIndex < numberOfFriends ? " " : "");
    }
    return 0;
}
