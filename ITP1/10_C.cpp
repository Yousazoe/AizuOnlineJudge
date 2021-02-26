#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double m,avg;
    while ((cin >> n) && n){
        int arr[n];
        m = 0,avg = 0;

        for (int i = 0; i < n; ++i){
            cin >> arr[i];
            avg += arr[i];
        }
        avg /= n;

        for (int i = 0; i < n; ++i) {
            m += (arr[i] - avg)*(arr[i] - avg);
        }
        m /= n;

        cout << setprecision(10) << sqrt(m) << endl;
    }

    return 0;
}