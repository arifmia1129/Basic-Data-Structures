#include<bits/stdc++.h>
using namespace std;


class MaxHeap{
    public:
        vector<int> v;

        void push(int val) {
            v.push_back(val);

            int currentIdx = v.size() - 1;
 
            while(currentIdx != 0) {
                int parentIdx = (currentIdx - 1) / 2;

                if(v[parentIdx] < v[currentIdx]) {
                    swap(v[parentIdx], v[currentIdx]);
                    currentIdx = parentIdx;
                }
                else break;
            }
        }

        void print() {
            for(int x : v) cout << x << " ";
            cout << endl;
        }

        void pop() {
            swap(v[0], v[v.size() - 1]);
            v.pop_back();

            int currentIdx = 0;

            while(true) {
                int leftIdx = (currentIdx * 2) + 1;
                int rightIdx = (currentIdx * 2) + 2;

                int leftVal = leftIdx < v.size() ? v[leftIdx] : INT_MIN;
                int rightVal = rightIdx < v.size() ? v[rightIdx] : INT_MIN;
                int currentVal = v[currentIdx];

                if(leftVal > rightVal && leftVal > currentVal) {
                    swap(v[leftIdx], v[currentIdx]);
                    currentIdx = leftIdx;
                }else if(rightVal > leftVal && rightVal > currentVal) {
                    swap(v[rightIdx], v[currentIdx]);
                    currentIdx = rightIdx;
                }else break;
            }
        }
};

int main () {
    int n;

    cin >> n;

    MaxHeap myHeap;

    while(n--) {
        int val;
        
        cin >> val;

        myHeap.push(val);
    }

    
    myHeap.print();
    
    myHeap.pop();

    myHeap.print();

    return 0;
}