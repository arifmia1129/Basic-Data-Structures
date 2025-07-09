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
    }

    tail->next = newNode;
    tail = newNode;
}

void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void reversePrint(Node* tmp) {
    if(tmp == NULL) {
        return;
    }

    reversePrint(tmp->next);
    cout << tmp->val << endl;
}

void reverseList(Node* &head, Node* &tail, Node* tmp) {
    if(tmp->next == NULL) {
        head = tmp;
        return;
    }

    reverseList(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        int x;

        cin >> x;


        if(x == -1) {
            break;
        }


        insertAtTail(head, tail, x);
        
    }


    reverseList(head, tail, head);

    printList(head);
    
    return 0;
}