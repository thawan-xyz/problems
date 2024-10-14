#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int numberOfTeams; cin >> numberOfTeams;

    vector<pair<int, int>> teamsUniforms(numberOfTeams);
    for (auto& [homeUniform, awayUniform] : teamsUniforms) {
        cin >> homeUniform >> awayUniform;
    }

    int numberOfSpecialGames = 0;
    for (auto [firstHomeUniform, firstAwayUniform] : teamsUniforms) {
        for (auto [secondHomeUniform, secondAwayUniform] : teamsUniforms) {
            if (firstHomeUniform == secondAwayUniform) {
                numberOfSpecialGames++;
            }
        }
    }
    cout << numberOfSpecialGames;
    return 0;
}
