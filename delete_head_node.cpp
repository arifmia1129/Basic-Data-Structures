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
void deleteHeadNode(Node* &head) {
   Node* deleteNode = head;

   head = deleteNode->next;

   delete deleteNode;
}



void reversePrint(Node* tmp) {
    if(tmp == NULL) {
        return;
    }

    reversePrint(tmp->next);
    cout << tmp->val << endl;
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

    deleteHeadNode(head);
    printList(head);
    
    return 0;
}