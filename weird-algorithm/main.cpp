#include <iostream>

using namespace std;

#define ll long long int

void weird_algorithm(ll n) {
    if (n == 1) {
        cout << n << endl;
    }
    else {
        cout << n << " ";
        if (n % 2) {
            weird_algorithm((n * 3) + 1);
        }
        else {
            weird_algorithm(n / 2);
        }
    }

}

int main() {
    ll n;
    cin >> n;
    weird_algorithm(n);
    return 0;
}
