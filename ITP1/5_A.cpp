#include <iostream>
using namespace std;

int main(){
    int w,h;
    while ((cin >> w >> h)&&(w||h)){
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < h; ++j) {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}