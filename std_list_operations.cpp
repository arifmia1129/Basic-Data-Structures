#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> l = {50, 20, 40, 10, 60, 80, 5, 15, 22, 10};

    // l.remove(10);
    // l.sort();
    l.sort(greater<int>());

    l.unique();
    l.reverse();

    for(int val : l) {
        cout << val << " ";
    }

    return 0;
}