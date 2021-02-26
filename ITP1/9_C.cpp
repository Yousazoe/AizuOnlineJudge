#include <iostream>
#include <string>
using namespace std;

void judge(string str1,string str2,int& num1,int& num2);

int main(){
    int n,num1 = 0,num2 = 0;
    string str1,str2;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> str1 >> str2;

        judge(str1,str2,num1,num2);
    }

    cout << num1 << " " << num2 << endl;
    return 0;
}

void judge(string str1,string str2,int& num1,int& num2){
    int len1 = str1.size();
    int len2 = str2.size();
    int len = len1;

    if (len1 < len2)
        len = len2;

    for (int i = 0; i < len; ++i) {
        if (str1[i] > str2[i]){
            num1 += 3;
            break;
        }
        else if (str1[i] == str2[i]){
            if (i == len - 1){
                num1++;
                num2++;
            }
        }
        else{
            num2 += 3;
            break;
        }
    }
}