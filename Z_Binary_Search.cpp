#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while(q--) {
        int l = 0; 
        int r = n - 1;

        int is_found = 0;

        int search_value;

        cin >> search_value;

        

        while(l <= r) {
            int midIdx = (l + r) / 2;

            int midVal = v[midIdx];

            if(midVal == search_value) {
                is_found = 1;
                break;
            }else if(midVal > search_value) {
                r = midIdx - 1;
            }else {
                l = midIdx + 1;
            }

            }

            if(is_found == 1) {
                cout << "found" << endl;
            }else {
                cout << "not found" << endl;
            }
        }
 
    return 0;
}