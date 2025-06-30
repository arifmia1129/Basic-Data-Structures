#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    
    cin >> n;
    
    int avg = n / 2;

    int space = n - 2;
    int space1 = 0;

    for(int i = 0; i < avg; i++) {
       for(int i = 0; i < space1; i++) {
            cout << " ";
        }
        cout << "\\";
        for(int j = space; j > 0; j--) {
            cout << " ";
        }
        space -= 2;
        cout << "/";
        cout << endl;
        
        space1 += 1;
    }
 
    for(int i = avg; i > 0; i--) {
        cout << " ";
    }
    cout << 'X' << endl;

    int space2 = 2;
    int space3 = n - avg;

    for(int i = 0; i < avg; i++) {
        for(int i = 2; i < space3; i++) {
            cout << " ";
        }
        cout << "/";
       
        for(int j = space2; j > 1; j--) {
            cout << " ";
        }
        

        
        cout << "\\";

        space2 += 2;
        
        cout << endl;
        
        space3--;
    }

    return 0;
}


// \   /
//  \ /
//   X
//  / \
// /   \
