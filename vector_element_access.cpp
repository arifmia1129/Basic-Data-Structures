#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[2] << endl;

    cout << v[0] << endl;
    cout << v.front() << endl;

    cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;

    return 0;
}