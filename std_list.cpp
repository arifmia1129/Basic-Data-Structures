#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> l = {10, 20, 30, 20, 20, 60, 20};

    // list<int> l2(l);

    // int a[3] = {100, 200, 300};

    // vector<int> v = {5, 10, 15};

    // list<int> l2(a, a+3);

    // list<int> l2(v.begin(), v.end());

    // l2.clear();

    // if(l2.empty()) {
    //     cout << "The list is empty" << endl;
    // }

    // l2.resize(5, 100);

    // int size = l2.size();

    // cout << "Size of list: " << size << endl;

    // for(auto it = l.begin(); it != l.end(); it++) {
    //     cout << *it << " ";
    // }

    // list<int> l2 = l;
    // list<int> l2;

    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(0);

    // cout << *next(l.begin(), 2) << endl;

    // list<int> new_list = {11, 22, 33};

    // l.insert(next(l.begin(), 2), new_list.begin(), new_list.end());


    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 10);

    if(it != l.end()) {
        cout << "Found" << endl;
    }else {
        cout << "Not found" << endl;
    }


    for(int v : l) {
        cout << v << " ";
    }

    return 0;
}