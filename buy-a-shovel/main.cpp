#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int shovelPrice, pocketCoin; cin >> shovelPrice >> pocketCoin;

    int currentChange, shovelsBought = 0;
    do {
        shovelsBought++;
        currentChange = shovelPrice * shovelsBought % 10;
    } while (currentChange != 0 && currentChange != pocketCoin);

    cout << shovelsBought;

    return 0;
}
