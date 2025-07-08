#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void forwardPrint(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}


void backwardPrint(Node* tail) {
    Node* tmp = tail;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }

    cout << endl;
}

void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insertAtHead(head, 100);

    forwardPrint(head);
    backwardPrint(tail);
    
    return 0;
}