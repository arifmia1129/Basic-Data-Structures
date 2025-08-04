#include<bits/stdc++.h>
using namespace std;


vector<int> takeInput() {
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    return v;
}

vector<int> insertToHeap(vector<int> v, int val) {
    v.push_back(val);  

    int currentIdx = v.size() - 1;

    while(currentIdx != 0) {
        int parentIdx = (currentIdx - 1) / 2;

        if(v[parentIdx] < v[currentIdx]) {
            swap(v[parentIdx], v[currentIdx]);
            currentIdx = parentIdx;
        }else break;
    }

    return v;
}

vector<int> deleteFromHeap(vector<int> &v) {
    swap(v[0], v[v.size() - 1]);

    v.pop_back();

    int currentIdx = 0;

    while(true) {
        int leftIdx = (currentIdx * 2) + 1;
        int rightIdx = (currentIdx * 2) + 2;

        int currentVal = v[currentIdx];
        int leftVal = leftIdx < v.size() ? v[leftIdx] : INT_MIN, rightVal = rightIdx < v.size() ? v[rightIdx] : INT_MIN;

        
        if(leftVal > rightVal && leftVal > currentVal) {
            swap(v[leftIdx], v[currentIdx]);
            currentIdx = leftIdx;
        }else if(rightVal > leftVal && rightVal > currentVal) {
            swap(v[rightIdx], v[currentIdx]);
            currentIdx = rightIdx;
        }else break;
    }

    return v;
}

void printHeap(vector<int> v) {
    for(int  x : v) cout << x << " ";
    cout << endl;
}


int main () {

    vector<int> v = takeInput();

    int val; cin >> val;

    vector<int> v1 = insertToHeap(v, val);

    printHeap(v1);

    vector<int> finalV = deleteFromHeap(v1);

    printHeap(finalV);
    
    return 0;
}