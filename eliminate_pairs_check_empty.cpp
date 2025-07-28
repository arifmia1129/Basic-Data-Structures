#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;

    cin >> s;

    stack<char> st;

    for(char c : s) {
        if(st.empty()) {
            st.push(c);
        }else {
            if(st.top() == 'B' && c == 'A') st.pop();
            else st.push(c);
        }
    }

    if(st.empty()) {
        cout << "Empty" << endl;
    }else {
        cout << "Not Empty" << endl;
    }

    return 0;
}