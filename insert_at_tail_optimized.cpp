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

void print_list(Node* head){
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void insert_tail(Node* head, Node* &tail, int val) {
    Node* new_node = new Node(val);

    if(head == NULL) {
        head = new_node;
        tail = new_node;

        return;
    }

    tail->next = new_node;
    tail = new_node;
}

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_tail(head, tail, 40);
    insert_tail(head, tail, 50);
    insert_tail(head, tail, 60);

    print_list(head);
    
    return 0;
}