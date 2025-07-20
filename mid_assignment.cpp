#include<bits/stdc++.h>
using namespace std;

int main () {
    list<string> browserHistory;

    string website;

    while(cin >> website && website != "end") {
        browserHistory.push_back(website);
    }

    int q;

    cin >> q;


    auto current = browserHistory.begin();

    while(q--) {
        string cmd;

        cin >> cmd;

        if(cmd == "visit") {
            string site;
            cin >> site;

            auto isFound = find(browserHistory.begin(), browserHistory.end(), site);
            
            if(isFound != browserHistory.end()) {
                cout << *isFound << endl;
                current = isFound;
            }else {
                cout << "Not Available" << endl;
            }
        }else if(cmd == "prev") {
            auto prv = prev(current);

            if(current != browserHistory.begin()) {
                current = prv;
                cout << *prv << endl;
            }else {
                cout << "Not Available" << endl;
            }

        }else if(cmd == "next") {
            auto nxt = next(current);
            auto isFound = find(browserHistory.begin(), browserHistory.end(), *nxt);

            if((nxt != browserHistory.begin() || nxt == browserHistory.begin()) && isFound != browserHistory.end()) {
                current = nxt;
                cout << *nxt << endl;
            }else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}