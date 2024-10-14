#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    vector<int> firstAlphabet(26, 0);
    vector<int> secondAlphabet(26, 0);

    vector<int> alphabet(26, 0);
    pair<string, string> words{};

    int boards;
    cin >> boards;

    for (int i = 0; i < boards; ++i) {
        cin >> words.first;
        cin >> words.second;

        for (char character : words.first) {
            firstAlphabet[character - 'a']++;
        }

        for (char character : words.second) {
            secondAlphabet[character - 'a']++;
        }

        for (int j = 0; j < 26; ++j) {
            if (firstAlphabet[j] > secondAlphabet[j]) {
                alphabet[j] += firstAlphabet[j];
            }
            else {
                alphabet[j] += secondAlphabet[j];
            }
        }

        fill(firstAlphabet.begin(), firstAlphabet.end(), 0);
        fill(secondAlphabet.begin(), secondAlphabet.end(), 0);
    }

    for (int i : alphabet) {
        cout << i << "\n";
    }

    return 0;
}
