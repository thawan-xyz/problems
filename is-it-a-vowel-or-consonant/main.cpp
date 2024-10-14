#include <bits/stdc++.h>
#define array vector
#define read scanf
#define str string
#define write printf
#define endl '\n'
using namespace std;

// @author: Thawan, 2024-10-12
// @problem: Is it a VOWEL or CONSONANT (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

bool is_vowel(const char& C) {
    return C == 'A'
        || C == 'E'
        || C == 'I'
        || C == 'O'
        || C == 'U';
}

int main() {
    char C; read("%c", &C);
    write("%s\n", is_vowel(C) ? "VOWEL" : "CONSONANT");
    return 0;
}
