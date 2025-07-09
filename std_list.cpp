#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> l = {10, 20, 30};

    // list<int> l2(l);

    // int a[3] = {100, 200, 300};

    vector<int> v = {5, 10, 15};

    // list<int> l2(a, a+3);

    list<int> l2(v.begin(), v.end());

    // for(auto it = l.begin(); it != l.end(); it++) {
    //     cout << *it << " ";
    // }

    for(int v : l2) {
        cout << v << " ";
    }

    return 0;
}