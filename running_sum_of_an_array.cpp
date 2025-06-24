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
            pre_sum[0] = v[i];
        }else {
            pre_sum[i] = pre_sum[i - 1] + v[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << pre_sum[i] << " ";
    }



    return 0;
}