#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;

    cin >> t;

    while(t--) {
        int a, b, c;

        cin >> a >> b >> c;

        
        int left1Time = a - 1;
        int left2Time = abs(b - c) + c - 1;

        if(left1Time < left2Time) cout << 1 << endl;
        else if(left2Time < left1Time) cout << 2 << endl;
        else cout << 3 << endl;
        
    }

    return 0;
}