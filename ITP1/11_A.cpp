#include <iostream>
#include <string>
using namespace std;

void setArr(int* arr,int num0,int num1,int num2,int num3,int num4,int num5){
    arr[0] = num0;
    arr[1] = num1;
    arr[2] = num2;
    arr[3] = num3;
    arr[4] = num4;
    arr[5] = num5;
}


int main(){
    int num[6],arr[6];
    string s;
    char cmd;

    for (int i = 0; i < 6; ++i) {
        cin >> num[i];
        arr[i] = num[i];
    }
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < 6; ++j) {
            arr[j] = num[j];
        }

        cmd = s[i];
        switch (cmd) {
            case 'N':
                setArr(num,arr[1],arr[5],arr[2],arr[3],arr[0],arr[4]);
                break;

            case 'S':
                setArr(num,arr[4],arr[0],arr[2],arr[3],arr[5],arr[1]);
                break;

            case 'W':
                setArr(num,arr[2],arr[1],arr[5],arr[0],arr[4],arr[3]);
                break;

            case 'E':
                setArr(num,arr[3],arr[1],arr[0],arr[5],arr[4],arr[2]);
                break;
        }
    }

    cout << num[0] << endl;

    return 0;
}