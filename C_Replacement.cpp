#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if(x > 0) {
            v.push_back(1);
        }else if(x < 0) {
            v.push_back(2);
        }else {
            v.push_back(x);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}