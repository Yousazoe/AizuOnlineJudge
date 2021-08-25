#include <iostream>
using namespace std;

int gcd(int m, int n) {
    int r;
    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;

    return 0;
}