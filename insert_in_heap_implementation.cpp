#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int val;

    cin >> val;

    v.push_back(val);

    int currentIdx = v.size() - 1;
    
    while(currentIdx != 0) {
        int parentIdx = (currentIdx - 1) / 2;
        if(v[parentIdx] < v[currentIdx]) {
            swap(v[parentIdx], v[currentIdx]);
            currentIdx = parentIdx;
        }
        else break;
    }

    for(int x : v) cout << x << " ";
    
    return 0;
}