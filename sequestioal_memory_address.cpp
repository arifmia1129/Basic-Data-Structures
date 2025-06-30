#include<bits/stdc++.h>
using namespace std;

int main () {
    // int a[5] = {1, 2, 3, 4, 5};
    vector<int> v = {1, 2, 3, 4, 5};

    cout << (long long int)&v[3] << " " << (long long int)&v[4];

    return 0;
}