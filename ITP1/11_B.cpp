#include <iostream>
using namespace std;

int dice[6][5]{
        2,3,5,4,2,
        1,4,6,3,1,
        1,2,6,5,1,
        1,5,6,2,1,
        1,3,6,4,1,
        2,4,5,3,2
};

int find(int dice1[6][5],int index,int k){
    for (int i = 0; i < 6; ++i) {
        if (dice1[index][i] == k)
            return dice1[index][i + 1];
    }
}

int findIndex(int arr[6],int m){
    for (int i = 0; i < 6; ++i) {
        if (arr[i] == m)
            return i;
    }
}

int main(){
    int arr[6],dice1[6][5];
    int n,m,k;
    for (int i = 0; i < 6; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            dice1[i][j] = arr[dice[i][j] - 1];
        }
    }

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m >> k;
        cout << find(dice1,findIndex(arr,m),k) << endl;
    }

    return 0;
}