#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, q;

    cin >> n >> q;

    vector<long long int> v(n + 1);
    vector<long long int> sum(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        if(i > 1) {
            sum[i] = sum[i - 1] + v[i];
        }else {
           sum[i] = v[i];
        }
    }

    while(q--) {
        long long int l, r;

        cin >> l >> r;

        long long int total = 0;

       if(l == 1) {
        total = sum[r];
       }else {
        total = sum[r] - sum[l - 1];
       }

        cout << total << endl;
    }

    return 0;
}