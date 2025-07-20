#include<bits/stdc++.h>
using namespace std;



void forward_print(list<int> l) {
    cout << "L -> ";
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
}
void backward_print(list<int> l) {
    cout << "R -> ";
    l.reverse();
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
}



int main () {
   list<int> l;

   
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, v;

        cin >> x >> v;

        if(x == 2) {
                if(v  > l.size() - 1) {
                    forward_print(l);
                    backward_print(l);
                }else {
                    auto it = l.begin();

                    for(int i = 0; i < v; i++) {
                        it++;
                    }

                    if(it != l.end()) {
                        l.erase(it);
                    }
                
                    forward_print(l);
                    backward_print(l);
                }
               
            }
            else if(x == 0) {
                l.push_front(v);
                forward_print(l);
                backward_print(l);
            }else if(x == 1) {
                l.push_back(v);
                forward_print(l);
                backward_print(l);
            }
    }
   

    
    return 0;
}