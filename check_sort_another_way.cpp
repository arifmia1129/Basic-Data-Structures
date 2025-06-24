#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);

    int is_sort = 1;

    for(int i = 0; i < n; i++) {
        cin >> v[i];

    }

    vector<int> cpy_v(v);

    sort(v.begin(), v.end(), greater<int>());


    for(int i = 0; i < n; i++) {
       if(v[i] != cpy_v[i]) {
        is_sort = 0;
        break;
       }
    }

    if(is_sort) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}