#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    double C;
    cin >> a >> b >> C;
    C *= M_PI / 180;

    cout << setprecision(10) << 0.5 * a * b * sin(C) << endl
         << a + b + sqrt(a*a + b*b - 2*a*b*cos(C)) << endl
         << b * sin(C) << endl;
    return 0;
}