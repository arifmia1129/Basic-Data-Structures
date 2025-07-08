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

void insertAtHead(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void deleteHeadNode(Node* &head) {
   Node* deleteNode = head;

   head = deleteNode->next;

   delete deleteNode;
}

void deleteAtTail(Node* &head, Node* &tail, int idx) {
    Node* tmp = head;

    for(int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;

    tail = tmp;

    delete deleteNode;
}

void deleteAtAnyPosition(Node* &head, int idx) {
    Node* tmp = head;

    for(int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;

    delete deleteNode;
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
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main () {
    int q;

    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;


    for(int i = 0; i < q; i++) {

        int x, v;
        
        cin >> x >> v;


        if(x == 0) {
            insertAtHead(head, tail, v);
            printList(head);
        }else if(x == 1) {
            insertAtTail(head, tail, v);
            printList(head);
        }else {
            int sz = calculateSize(head) - 1;

            if(v > sz) {
                printList(head);
                continue;
            }

            if(v == 0) {
                deleteHeadNode(head);
            }else if(v == sz) {
                deleteAtTail(head, tail, v);
            }else {
                deleteAtAnyPosition(head, v);
            }
             
            printList(head);
        }

    }

    
    return 0;
}