#include<bits/stdc++.h>
using namespace std;

int main () {
    // vector<int> v; //type1
    // vector<int> v(10); //type2
    // vector<int> v(10, 0); //type3
    // vector<int> v2(v); //type3

    int a[5] = {1, 2, 3, 4, 5};

    vector<int> v2(a, a + 5); //type4

    // vector<int> v2 = {1, 2, 3, 4};

    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }


    return 0;
}