#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num == 2 || num == 3) return true;

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N, num, count = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (isPrime(num))
            count++;
    }

    cout << count << endl;
    return 0;
}
