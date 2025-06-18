#include<bits/stdc++.h>
using namespace std;

int main () {
    // vector<int> v; //type1
    // vector<int> v(10); //type2
    // vector<int> v(10, 0); //type3
    // vector<int> v2(v); //type3

    int a[5] = {1, 2, 3, 4, 5};

    vector<int> v2(a, a + 5); //type4

    // cout << "Vector size: " << v2.size() << endl;
    // cout << "Vector max size: " << v2.max_size() << endl;
    // cout << "Vector capacity " << v2.capacity() << endl;
    // v2.push_back(19);
    // cout << "Vector capacity " << v2.capacity() << endl;



    // vector<int> v2 = {1, 2, 3, 4};

    // v2.clear();

    v2.resize(2);

    if(v2.empty()) {
        cout << "There is no element in above array." << endl;
    }

    cout << v2[0];
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }


    return 0;
}