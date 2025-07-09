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

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void reverseList(Node* head, Node* tail) {
    for(Node *i = head,  *j = tail; i != j && j != i->prev; i = i->next, j = j->prev) {
        swap(i->val, j->val);
    }
}

void printForwardList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(1) {
        cin >> val;
        if(val == -1) {
            break;
        }
        
        insertAtTail(head, tail, val);
    }

    reverseList(head, tail);

    printForwardList(head);
    
    return 0;
}