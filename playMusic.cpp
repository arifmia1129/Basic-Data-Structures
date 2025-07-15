#include<bits/stdc++.h>
using namespace std;

int main () {
    list<string> playList;

    string song;

    while(cin >> song && song != "stop") {
        playList.push_back(song);
    }

    int q;

    cin >> q;

    auto current = playList.begin();

    while(q--) {
        string cmd;

        cin >> cmd;


        if(cmd == "play") {
            string songName;
            cin >> songName;

            auto isFound = find(playList.begin(), playList.end(), songName);
            current = isFound;

            if(isFound != playList.end()) {
                cout << *isFound << " " << "playing" << endl;
            }else {
                cout << "Not found" << endl;
            }

        }else if(cmd == "right") {
            auto nxt = next(current);

            if(nxt != playList.end()) {
                current = nxt;
                cout << *nxt << " " << "playing" << endl;
            }else {
                cout << "Not found" << endl;
            }

        }else if(cmd == "left"){
            auto prv = prev(current);

            if(prv == playList.begin()) {
                cout << "Not found" << endl;
            }else {
                current = prv;
                cout << *prv << " " << "playing" << endl;
            }
        }
    }
    
    return 0;
}