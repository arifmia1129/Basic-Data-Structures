#include<bits/stdc++.h>
using namespace std;

int main () {
    int tc;

    cin >> tc;

    for(int i = 0; i < tc; i++) {
        int n;

        cin >> n;

        int is_prime = 1;

        for(int j = 2; j <= sqrt(n) && n != 0; j++) {
            if(n % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if(is_prime == 1 && n > 1) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}