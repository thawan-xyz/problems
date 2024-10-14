#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string s; getline(cin, s);

    set<char> l;
    for (char c : s) {
        if (c != '{' && c != '}' && c != ',' && c != ' ') {
            l.insert(c);
        }
    }

    cout << l.size();
    return 0;
}
