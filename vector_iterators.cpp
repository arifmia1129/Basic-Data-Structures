#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v = {1, 2, 3, 5};

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}