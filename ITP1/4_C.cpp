#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    char op;

    while ((cin >> a >> op >> b)&&(op != '?')){
        switch (op) {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
        }
        cout << c << endl;
    }
    return 0;
}