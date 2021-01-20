#include <iostream>
using namespace std;

struct Card{
    char s;
    int rank[13];
};

void init(Card& card,char s){
    card.s = s;
    for (int i = 0; i < 13; ++i) {
        card.rank[i] = 0;
    }
}

void find(Card& card,int tmp){
    card.rank[tmp - 1] = 1;
}

void output(Card& card){
    for (int i = 0; i < 13; ++i) {
        if (!card.rank[i])
            cout << card.s << " " << i + 1 << endl;
    }
}

int main(){
    int n,tmp;
    char suit;
    cin >> n;

    Card card[4];
    init(card[0],'S');
    init(card[1],'H');
    init(card[2],'C');
    init(card[3],'D');

    for (int i = 0; i < n; ++i) {
        cin >> suit >> tmp;
        switch (suit) {
            case 'S':
                find(card[0],tmp);
                break;
            case 'H':
                find(card[1],tmp);
                break;
            case 'C':
                find(card[2],tmp);
                break;
            case 'D':
                find(card[3],tmp);
                break;
        }
    }

    for (int j = 0; j < 4; ++j) {
        output(card[j]);
    }

    return 0;
}