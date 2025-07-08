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

bool isExist(Node* head, int val) {
    Node* tmp = head;

    bool exist = false;

    while(tmp != NULL) {
        if(tmp->val == val) {
            exist = true;
            break;
        }

        tmp = tmp->next;
    }

    return exist;
}

void insertAtTail(Node* &head, Node* &tail, int val) {
    if(isExist(head, val)) {
        return;
    }

    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}


void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}





int main () {
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

    printList(head);
    
    return 0;
}