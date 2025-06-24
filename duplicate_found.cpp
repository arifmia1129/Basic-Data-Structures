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

    int is_found = 0;

      for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i + 1]) {
            is_found = 1;
            break;
        }
    }

    if(is_found) {
        cout << "Duplicate found" << endl; 
    }else {
        cout << "Duplicate not found" << endl;
    }

    return 0;
}