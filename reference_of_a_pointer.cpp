#include<bits/stdc++.h>
using namespace std;

void fun(int* &p) {
    // cout << "Value of p: " << *p << endl;
    // cout << "Address of p in fun: " << p << endl;
    int y = 100;
    *p = y;
}

int main () {
    int x = 10;
    int* p = &x;

    fun(p);

    // cout << "Value of X: " << *p << endl;
    // cout << "Address of p in main: " << p << endl;
    cout << x << endl;
    
    return 0;
}