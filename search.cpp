#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}




void search(Node* head, int query) {
    Node* tmp = head;
    int idx = 0;
    bool isFound = false;

    while(tmp != NULL) {
        if(tmp->val == query) {
            isFound = true;
            break;
        }
        tmp = tmp->next;
        idx++;
    }

    if(isFound) {
        cout << idx << endl;
    }else {
        cout << -1 << endl;
    }
}



int main () {
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {

        Node* head = NULL;
        Node* tail = NULL;
        

        while(true) {
            int val;

            cin >> val;

            if(val == -1) {
                break;
            }

            insertAtTail(head, tail, val);
        }

        int query;
        cin >> query;

        search(head, query);

    }

    
    return 0;
}