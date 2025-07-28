#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    queue<string> q;

    while(n--) {
        int x;

        cin >> x;

        if(x == 0) {
            string name;

            cin >> name;

            q.push(name);
        }else {
            if(q.empty()) {
                cout << "Invalid" << endl;
            }else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}