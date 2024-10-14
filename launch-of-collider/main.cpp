#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-19
// @problem: 699A - Launch of Collider (Codeforces)
// @url: https://codeforces.com/contest/699/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number_particles;
    cin >> number_particles;

    string particle_directions;
    cin >> particle_directions;
    
    array<int> particle_coordinates(number_particles);
    for (auto& particle_coordinate : particle_coordinates) {
        cin >> particle_coordinate;
    }

    int earliest_collision = INT_MAX;
    for (int i = 1; i < number_particles; ++i) {
        if (particle_directions[i] == 'L' && particle_directions[i - 1] == 'R') {
            earliest_collision = min(earliest_collision, (particle_coordinates[i] - particle_coordinates[i - 1]) / 2);
        }
    }
    earliest_collision = earliest_collision != INT_MAX ? earliest_collision : -1;

    cout << earliest_collision << endl;
    return 0;
}
