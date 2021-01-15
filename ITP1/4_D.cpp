#include <iostream>
using namespace std;

int main(){
    int n,tmp,min,max;
    long sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> tmp;

        if (i == 0){
            min = max = tmp;
        }

        if (max < tmp){
            max = tmp;
        }

        if (min > tmp){
            min = tmp;
        }

        sum += tmp;
    }

    cout << min << " " << max << " " << sum << endl;
    return 0;
}