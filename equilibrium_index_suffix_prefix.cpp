#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);
    vector<int> pre;

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(i == 0) {
            pre.push_back(v[i]);
        }else {
            pre.push_back(v[i] + pre[i - 1]);
        }
    }

    vector<int> suf(n);

    suf[n - 1] = v[n - 1];

    for(int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + v[i];
    }

    // for(int i = 0; i < n; i++) {
    //    cout << pre[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++) {
    //    cout << suf[i] << " ";
    // }

    for(int i = 1; i < n; i++) {
        if(pre[i - 1] == suf[i + 1]) {
            cout << i;
            break;
        }
    }

    return 0;
}