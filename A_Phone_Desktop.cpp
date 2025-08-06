#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;

    cin >> t;

    while(t--) {
        int x, y;

        cin >> x >> y;

        int screensForLarge = (y + 1) / 2;
        int remainCells = (screensForLarge * 15) - (y * 4);
        int freeCells = max(0, x - remainCells);
        int screenForSmall = (freeCells + 14) / 15;

        int total = screensForLarge + screenForSmall;

        cout << total << endl;
    }
    return 0;
}