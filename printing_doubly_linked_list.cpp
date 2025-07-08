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

void deleteFromHead(Node* &head, Node* tail) {
    Node* deleteNode = head;

    deleteNode->next->prev = NULL;
    head = deleteNode->next;

    if(head == NULL) {
        tail = NULL;
    }

    delete deleteNode;
}

void deleteFromTail(Node* &head, Node* &tail) {
    Node* deleteNode = tail;

    tail = deleteNode->prev;

    delete deleteNode;
    
    if(tail == NULL) {
        head = NULL;
        return;
    }
    
   tail->next = NULL;
}

int calculateSize(Node* head) {
    int size = 0;

    Node* tmp = head;

    while(tmp != NULL) {
        tmp = tmp->next;
        size++;
    }

    return size;
}

void deleteFromAnyPos(Node* head, int pos) {
  
    if(calculateSize(head) - 1 <= pos) {
        return;
    }

    Node* tmp = head;

    for(int i = 1; i < pos; i++) {
        tmp = tmp->next;
    }
    

    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    deleteNode->next->prev = tmp;

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
    // deleteFromHead(head, tail);
    // deleteFromTail(head, tail);
    // deleteFromTail(head, tail);
    deleteFromAnyPos(head, 1);
    forwardPrint(head);
    // backwardPrint(tail);
    
    return 0;
}