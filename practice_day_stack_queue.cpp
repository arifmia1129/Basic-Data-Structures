// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int n;

//     cin >> n;

//     stack<int> s1;

//     while(n--) {
//         int x;

//         cin >> x;

//         s1.push(x);
//     }

//     int m;

//     cin >> m;


//     if(m != s1.size()) {
//         cout << "NO" << endl;
//     }else{
//         stack<int> s2;

//         while(m--) {
//             int x;

//             cin >> x;

//             s2.push(x);
//         }

//         bool isSame = true;

//         while(!s1.empty()) {
//             if(s1.top() != s2.top()) {
//                 isSame = false;
//                 break;
//             }
//             s1.pop();
//             s2.pop();
//         }

//         if(isSame) {
//             cout << "YES" << endl;
//         }else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int n;

//     cin >> n;

//     stack<int> s1;

//     while(n--) {
//         int x;

//         cin >> x;

//         s1.push(x);
//     }

//     int m;

//     cin >> m;


//     if(m != s1.size()) {
//         cout << "NO" << endl;
//     }else{
//         queue<int> q;

//         while(m--) {
//             int x;

//             cin >> x;

//             q.push(x);
//         }

//         bool isSame = true;

//         while(!s1.empty()) {
//             if(s1.top() != q.front()) {
//                 isSame = false;
//                 break;
//             }
//             s1.pop();
//             q.pop();
//         }

//         if(isSame) {
//             cout << "YES" << endl;
//         }else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }


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

    stack<int> s2;

    while(!s1.empty()) {
        int val = s1.top();
        s2.push(val);

        s1.pop();
    }

    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }
    

    return 0;
}