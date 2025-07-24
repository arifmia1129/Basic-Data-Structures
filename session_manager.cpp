#include<bits/stdc++.h>
using namespace std;

int main () {
    queue<string> q;

    string cmd;

    while(cin >> cmd) {
        if(cmd == "JOIN") {
            string name;
            cin >> name;

            q.push(name);
        }else{
            if(q.empty()) {
                cout << "No Student" << endl;
            }else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}