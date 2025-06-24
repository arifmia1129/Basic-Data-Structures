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


    for(int i = 0; i < n; i++) {
       if(v[i] > v[i - 1]) {
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