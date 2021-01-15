#include <iostream>
using namespace std;

int main() {
    int h,m,s,S;
    cin >> S;

    h = S/3600;
    S -= 3600*h;

    m = S/60;
    S -= 60*m;

    s = S;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}