#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.141592653589793238

int main() {
    double r;
    cin >> r;
    cout << fixed;
    cout << setprecision(6) << PI*r*r << " " << 2.0*PI*r << endl;

    return 0;
}