#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int A[m][n],b[n],c[m];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
        c[i] = 0;
    }

    for (int k = 0; k < n; ++k) {
        cin >> b[k];
    }

    for (int l = 0; l < m; ++l) {
        for (int i = 0; i < n; ++i) {
            c[l] += A[l][i] * b[i];
        }
        cout << c[l] << endl;
    }

    return 0;
}