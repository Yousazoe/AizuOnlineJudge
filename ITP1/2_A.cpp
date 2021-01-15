#include <iostream>
#include <string>
using namespace std;

string Equal(int a,int b){
    switch (a > b?1:a == b?0:-1) {
        case 1:
            return ">";
            break;
        case 0:
            return "==";
            break;
        case -1:
            return "<";
            break;
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << "a " << Equal(a,b) << " b" << endl;
    return 0;
}