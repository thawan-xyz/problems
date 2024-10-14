#include <iostream>

using namespace std;

#define ll long long int

void selection_sort(ll array[], int array_size) {
    int x;

    for (int i = 0; i < (array_size - 1); ++i) {
        x = i;
        for (int j = i + 1; j < array_size; ++j) {
            if (array[j] < array[x]) {
                x = j;
            }
        }
        swap(array[i], array[x]);
    }

}

int main() {
    ll array[7];
    for (ll &i : array) {
        cin >> i;
    }
    selection_sort(array, 7);

    int a = array[0];
    int b = array[1];
    int c = ((a + b) == array[2]) ? array[3] : array[2];

    cout << a << " ";
    cout << b << " ";
    cout << c << endl;
    return 0;
}
