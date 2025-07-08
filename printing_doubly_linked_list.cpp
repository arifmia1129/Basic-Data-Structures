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

void insertAtHead(Node* &head, Node* tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail= newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insertAtTail(Node* head, Node* &tail, int val) {
    Node* newNode = new Node(200);

     if(head == NULL) {
        head = newNode;
        tail= newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void insertAtAnyPosition(Node* head, int pos, int val) {
    Node* newNode = new Node(val);

    Node* tmp = head;

    for(int i = 1; i < pos; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void deleteFromHead(Node* &head) {
    Node* deleteNode = head;

    deleteNode->next->prev = NULL;
    head = deleteNode->next;

    delete deleteNode;
}

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    // insertAtHead(head,tail, 100);
    // insertAtTail(head, tail, 200);
    // insertAtAnyPosition(head, 2, 500);
    deleteFromHead(head);
    forwardPrint(head);
    // backwardPrint(tail);
    
    return 0;
}