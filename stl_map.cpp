#include<bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string key; cin >> key;
        int val; cin >> val;
        mp[key] = val;
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    

    return 0;
}