#include <iostream>
#include <string>

using namespace std;

int main () {
    string cards[52], top25[25], bottom27[27];
    int t;
    cin >> t;
    cin >> ws;
    
    for (int j = 1; j <= t; j++) {
        for (int i = 0; i < 27; i++) {
            cin >> bottom27[26 - i];
        }
        for (int i = 0; i < 25; i++) {
            cin >> top25[24 - i];
        }
        int x = 0, y = 0, cursor = 0;
        char card; string cardss;
        for (int i = 0; i < 3; i++) {
            cardss = bottom27[cursor++];
            card = cardss[0];
            if (1 <= (int) (card - '0') && (int) (card - '0') <= 9) {
                x = (int) (card - '0');
            } else {
                x = 10;
            }
            y += x;
            cursor += 10 - x;
        }
        if (y < 27 - cursor) {
            cout << bottom27[y] << endl;
        } else {
            cout << "Case " << j << ": " << top25[25 - (y - (27 - cursor))] << endl;
        }
    }
    return 0;
}
