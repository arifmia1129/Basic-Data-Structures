// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     priority_queue<int> pq;

//     pq.push(5);
//     pq.push(10);
    
//     cout << pq.top() << endl;

//     pq.push(2);
//     pq.push(100);


//     cout << pq.top() << endl;


//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main () {
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(10);
    
    cout << pq.top() << endl;

    pq.push(2);
    pq.push(100);


    cout << pq.top() << endl;


    return 0;
}