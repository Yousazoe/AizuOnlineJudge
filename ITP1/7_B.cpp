#include <iostream>
using namespace std;

int main(){
    int n,x,count = 0;

    while ((cin >> n >> x)&& (x || n)){
        count = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                for (int k = j + 1; k <= n; ++k) {
                    if (i + j + k == x)
                        count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}