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


void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insertAtPosition(Node* &head, int position, int val) {
   
    Node* tmp = head;
   
    for(int i = 0; i < position - 1; i++) {
        if(tmp->next == NULL) {
            cout << "Invalid" << endl;
            return;
        }

        tmp = tmp->next;
    }

    Node* newNode = new Node(val);

    if(position == 0) {
        newNode->next = head;
        head = newNode;
    }else {
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    printList(head);
}


int main () {

    Node* head = NULL;
    Node* tail = NULL;

    int lastPos = 0;



    while(true) {
        int x;

        cin >> x;

        if(x == -1) {
            break;
        }
        

       insertAtTail(head, tail, x);
       lastPos++;
    }

    int q;

    cin >> q;

    while(q--) {
        int pos, val;

        cin >> pos >> val;

        insertAtPosition(head, pos, val);
    }

    return 0;
}