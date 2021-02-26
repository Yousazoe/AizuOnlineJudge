#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m,k;
    string str;

    while ((cin >> str) && (str[0] != '-')){
        string s = "";
        cin >> n;

        for (int i = 0; i < n; ++i) {
            k = 0;
            cin >> m;
            for (int j = m; j < str.size(); ++j,++k) {
                s[k] = str[j];
            }

            for (int l = 0; l < m; ++l,++k) {
                s[k] = str[l];
            }

            for (int o = 0; o < str.size(); ++o) {
                str[o] = s[o];
            }
        }
        cout << str << endl;

    }

    return 0;
}