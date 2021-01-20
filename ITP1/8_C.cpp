#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int count[256] = {0};
    char c;

    while ((c = getchar()) != EOF)
        count[c]++;

    for (int i = 97; i <= 122; ++i)
        cout << (char)i << " : " << count[i] + count[i - 32] << endl;
    return 0;
}