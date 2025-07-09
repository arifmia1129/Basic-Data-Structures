#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> l = {10, 20, 30, 40, 50};

    cout << l.front() << endl;
    cout << l.back() << endl;

    cout << *l.begin() << endl;

    return 0;
}