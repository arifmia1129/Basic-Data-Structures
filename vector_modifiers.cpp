#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v = {1, 2, 1, 4, 1};

    // vector<int> v2 = v1;

    // v.pop_back();

    vector<int> v2 = {100, 200, 300};

    // v.insert(v.begin() + 2, v2.begin(), v2.end());

    // v.erase(v.begin() + 1, v.end() - 1);

    // replace(v.begin(), v.begin() + 3, 1, 100);

    vector<int>::iterator it = find(v.begin(), v.end(), 40);

    if(it != v.end()) {
        cout << "Found" << endl;
    }else {
        cout << "Not found" << endl;
    }

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}