#include <iostream>
#include <set>
using namespace std;

int main() {
    string inputName; cin >> inputName;

    set<char> distinctChars; int distinctCharsCount = 0;

    int nameLength = inputName.size();
    for (int i = 0; i < nameLength; ++i) {
        if (!distinctChars.count(inputName[i])) {
            distinctChars.insert(inputName[i]); distinctCharsCount++;
        }
    }

    if (distinctCharsCount % 2) {
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    }
    return 0;
}
