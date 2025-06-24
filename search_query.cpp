#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int t;

    cin >> t;

    while(t--) {
    int search_val;

    cin >> search_val;

    int l = 0;
    int r = n - 1;

    int is_found = 0;

    while(l <= r) {

        int midIdx = (l + r) / 2;
        int midVal = v[midIdx];
        
        if(midVal == search_val) {
            is_found = 1;
            break;
        }else {
            if(midVal > search_val) {
                r = midIdx - 1;
            }else {
                l = midIdx + 1;
            }
        }
    }

    if(is_found) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;;
    }
    }

    return 0;
}

