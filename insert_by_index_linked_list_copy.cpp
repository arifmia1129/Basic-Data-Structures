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

void insert_at_head(Node* &head, int val) {
    Node* new_node = new Node(val);

    new_node->next = head;

    head = new_node;
}

void insert_at_any_position(Node* head, int idx, int val) {
    Node* new_node = new Node(val);

    Node* tmp = head;

    for(int i = 0; i < idx - 1; i++) {
        tmp  = tmp->next;
    }


    new_node->next = tmp->next;

    tmp->next = new_node;
}


void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

        if(pos > calculateSize(head)) {
            cout << "Invalid" << endl;
            continue;
        }else if(pos == calculateSize(head)) {
            insertAtTail(head, tail, val);
        }else if(pos == 0) {
            insert_at_head(head, val);
        }else{
            insert_at_any_position(head, pos, val);
        }

        printList(head);
    }

    return 0;
}