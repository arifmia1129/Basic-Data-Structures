#include<bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        vector<int> l;

        void push(int val) {
            l.push_back(val);
        }

        void pop() {
            l.pop_back();
        }

        int top() {
            return l.back();
        }

        int size() {
            return l.size();
        }

        bool empty () {
            return l.empty();
        }
};

int main () {

    MyStack lt;

   int n;

   cin >> n;

   while(n--) {
    int x;

    cin >> x;

    lt.push(x);
   }


   while (!lt.empty())
   {
    cout << lt.top() << endl;
    lt.pop();
   }
   
    
    return 0;
}