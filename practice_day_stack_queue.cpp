#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    stack<int> s1;

    while(n--) {
        int x;

        cin >> x;

        s1.push(x);
    }

    int m;

    cin >> m;


    if(m != s1.size()) {
        cout << "NO" << endl;
    }else{
        stack<int> s2;

        while(m--) {
            int x;

            cin >> x;

            s2.push(x);
        }

        bool isSame = true;

        while(!s1.empty()) {
            if(s1.top() != s2.top()) {
                isSame = false;
                break;
            }
            s1.pop();
            s2.pop();
        }

        if(isSame) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}