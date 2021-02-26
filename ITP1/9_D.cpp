#include <iostream>
#include <string>
using namespace std;

void print(string& str,int a,int b);
void replace(string& str,int a,int b,string s);
void reverse(string& str,int a,int b);

int main(){
    int a,b,q;
    char cmd;
    string str;
    cin >> str >> q;

    for (int i = 0; i < q; ++i) {
        string s,command;
        cin >> command >> a >> b;
        cmd = command[2];

        switch (cmd) {
            case 'i':{
                print(str,a,b);
                break;
            }
            case 'p':{
                cin >> s;
                replace(str,a,b,s);
                break;
            }
            case 'v':{
                reverse(str,a,b);
                break;
            }
        }
    }
    return 0;
}

void print(string& str,int a,int b){
    for (int i = a; i <= b; ++i) {
        cout << str[i];
    }
    cout << endl;
}

void replace(string& str,int a,int b,string s){
    int k = 0;
    for (int i = a; i <= b; ++i,++k) {
        str[i] = s[k];
    }
}

void reverse(string& str,int a,int b){
    string tmp;
    for (int i = 0; i < str.size(); ++i) {
        tmp[i] = str[i];
    }

    for (int i = a; i <= b; ++i) {
        tmp[i] = str[a + b - i];
    }

    for (int i = 0; i < str.size(); ++i) {
        str[i] = tmp[i];
    }
}