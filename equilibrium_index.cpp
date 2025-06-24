#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);
    
    vector<int> pre_sum(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(i == 0) {
            pre_sum[0] = v[0];
        }else{
            pre_sum[i] = pre_sum[i - 1] + v[i];
        }
    }

    vector<int> suf_sum(n);

    for(int i = n - 1; i >= 0; i--) {
        if(i == n - 1) {
            suf_sum[i] = v[n - 1];
        }else {
            suf_sum[i] = suf_sum[i + 1] + v[i];
        }
    }


    for(int i = 0; i < n; i++) {
        if(pre_sum[i - 1] == suf_sum[i + 1]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}