#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, input;
    int minv, maxv = -1000000000;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (i == 0) {
            minv = input;
            continue;
        }

        maxv = max(maxv, input - minv);
        minv = min(minv, input);
    }

    cout << maxv << endl;
    return 0;
}