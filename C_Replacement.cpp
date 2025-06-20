// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int n;

//     cin >> n;

//     vector<int> v;

//     for(int i = 0; i < n; i++) {
//         int x;

//         cin >> x;

//         if(x > 0) {
//             v.push_back(1);
//         }else if(x < 0) {
//             v.push_back(2);
//         }else {
//             v.push_back(x);
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> v1;

    for(int i = 0; i < n; i++) {
        if(v[i] > 0) {
           v1.push_back(1);
        }else  if(v[i] < 0) {
            v1.push_back(2);
        }else {
            v1.push_back(v[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }

    return 0;
}