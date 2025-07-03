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

int main () {

    Node* head1 = NULL;
    Node* tail1 = NULL;


    Node* head2 = NULL;
    Node* tail2 = NULL;

    int whichList = 1;


    while(true) {
        int x;

        cin >> x;

        if(x == -1) {
            whichList++;
            if(whichList > 2) break;
            continue;
        }
        

        if(whichList == 1) {
            insertAtTail(head1, tail1, x);
        }else {
            insertAtTail(head2, tail2, x);
        }
    }


    int size1 = calculateSize(head1);
    int size2 = calculateSize(head2);


    if(size1 == size2) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}