#include <iostream>

using namespace std;

struct {
    int x;
    int y;
} barn, lake, rock;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    char layout[10][10];
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> layout[i][j];
            if (layout[i][j] == 'B') {
                barn.x = i;
                barn.y = j;
            }
            else if (layout[i][j] == 'L') {
                lake.x = i;
                lake.y = j;
            }
            else if (layout[i][j] == 'R') {
                rock.x = i;
                rock.y = j;
            }
        }
    }

    int d = abs(barn.x - lake.x) + abs(barn.y - lake.y) - 1;

    bool sxy = (barn.x == lake.x && barn.x == rock.x) || (barn.y == lake.y && barn.y == rock.y);
    bool bxy = (barn.y < rock.y && rock.y < lake.y) || (barn.y > rock.y && rock.y > lake.y) || (barn.x < rock.x && rock.x < lake.x) || (barn.x > rock.x && rock.x > lake.x);
    if (sxy && bxy) {
        d += 2;
    }
    
    cout << d;
    return 0;
}
