#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-08-19
// @problem: 16B - Burglar and Matches (Codeforces)
// @url: https://codeforces.com/contest/16/problem/B

struct matchbox_container {
    int number_of_boxes;
    int matches_per_box;

    bool operator < (const matchbox_container& other) const {
        return matches_per_box > other.matches_per_box;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int total_capacity, number_of_containers;
    cin >> total_capacity >> number_of_containers;

    array<matchbox_container> matchbox_containers(number_of_containers);
    for (auto& [number_of_boxes, matches_per_box]: matchbox_containers) {
        cin >> number_of_boxes >> matches_per_box;
    }
    sort(matchbox_containers.begin(), matchbox_containers.end());

    int total_matches = 0;
    for (int index = 0; total_capacity > 0 && index < number_of_containers; ++index) {
        int number_of_boxes = min(total_capacity, matchbox_containers[index].number_of_boxes);
        total_matches += number_of_boxes * matchbox_containers[index].matches_per_box;
        total_capacity -= number_of_boxes;
    }
    cout << total_matches << endl;

    return 0;
}
