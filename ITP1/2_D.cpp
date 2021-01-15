#include <iostream>
#include <string>
using namespace std;

int main() {
    int x,y,w,h,r;
    cin >> w >> h >> x >> y >> r;

    string str = (x - r) >= 0 && (x + r) <= w && (y - r) >= 0 && (y + r) <= h?"Yes":"No";
    cout << str << endl;

    return 0;
}