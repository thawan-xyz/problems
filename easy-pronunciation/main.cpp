#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-10
// @problem: Easy Pronunciation (CodeChef)
// @url: https://www.codechef.com/practice/1-star-difficulty-problems

bool is_vowel(const char& c) {
    return c == 'a'
        || c == 'e'
        || c == 'i'
        || c == 'o'
        || c == 'u';
}

int main() {
    int T; read >> T;

    while (T--) {
        int N, C = 0, V = 0; read >> N;
        str S, R = "YES"; read >> S;

        for (int i = 0; i < N; ++i) {
            is_vowel(S[i]) ? ++V : ++C;
            if (i >= 4) {
                is_vowel(S[i - 4]) ? --V : --C;
            }

            C == 4 ? R = "NO" : "YES";
        }

        write << R << endl;
    }

    return 0;
}
