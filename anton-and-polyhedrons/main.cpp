#include <bits/stdc++.h>
#define array vector
#define umap unordered_map
#define endl '\n'
using namespace std;
     
// @author: Thawan Ribeiro, 2024-07-16
// @problem: 785A - Anton and Polyhedrons (Codeforces)
// @url: https://codeforces.com/contest/785/problem/A
     
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
     
    int number; cin >> number;
    umap<string, int> polyhedron = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
     
    string name; int total = 0;
    while (cin >> name) {
        total += polyhedron[name];
    }
     
    cout << total << endl;
    return 0;
}
