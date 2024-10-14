#include <iostream>
using namespace std;

int main() {
    pair<string, string> strings;
    cin >> strings.first >> strings.second;

    for (char& character : strings.first) {
        character = tolower(character);
    }
    for (char& character : strings.second) {
        character = tolower(character);
    }

    cout << strings.first.compare(strings.second);
    return 0;
}
