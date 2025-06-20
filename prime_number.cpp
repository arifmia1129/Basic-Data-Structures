#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;

        cin >> n;

        int is_prime = 1;

        for(int i = 2; i < sqrt(n); i++) {
            if(n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if(is_prime) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}