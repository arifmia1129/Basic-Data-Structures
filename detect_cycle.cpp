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

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node* fast = head;
    Node* slow = head;

    bool flag = false;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow) {
            flag = true;
            break;
        }
    }

    if(flag) 
        cout << "Cycle detected" << endl;
     else 
        cout << "No cycle" << endl;
     
    
    return 0;
}