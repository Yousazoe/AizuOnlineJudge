#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double d1 = 0.0,d2 = 0.0,d3 = 0.0,d = 0.0;
    cin >> n;
    int x[n],y[n];

    for (int i = 0; i < n; ++i)
        cin >> x[i];
    for (int i = 0; i < n; ++i)
        cin >> y[i];
    d = abs(x[0] - y[0]);

    for (int i = 0; i < n; ++i){
        if (d < abs(x[i] - y[i]))
            d = abs(x[i] - y[i]);

        d1 += abs(x[i] - y[i]);
        d2 += pow(abs(x[i] - y[i]),2);
        d3 += pow(abs(x[i] - y[i]),3);
    }

    d2 = sqrt(d2);
    d3 = pow(d3,1.0/3);

    cout << setprecision(10)
         << d1 << endl
         << d2 << endl
         << d3 << endl
         << d << endl;

    return 0;
}