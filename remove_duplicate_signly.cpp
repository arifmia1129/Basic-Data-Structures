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

int calculateSize(Node* head) {
    Node* tmp = head;

    int size = 0;

    while(tmp != NULL) {
        size++;
        tmp = tmp->next;
    }

    return size;
}

void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void removeDuplicate(Node* head) {
   Node* l = head;
   while(l != NULL) {
    Node* r = head;

    while(r->next != NULL) {
        if(l->val == r->next->val) {
            Node* deleteNode = r->next;
            r->next = r->next->next;
            delete deleteNode;
            r = r->next;
        }else {
            r = r->next;
        }
    }

    l = l->next;
   }
}

int main () {

    Node* head = NULL;
    Node* tail = NULL;



    while(true) {
        int x;

        cin >> x;

        if(x == -1) {
            break;
        }
        

       insertAtTail(head, tail, x);
    }

    removeDuplicate(head);


    printList(head);


    return 0;
}