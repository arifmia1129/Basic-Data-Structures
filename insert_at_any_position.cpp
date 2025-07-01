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

void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
       cout << tmp->val << endl;
       tmp = tmp->next;
    }
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

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100);

    print_linked_list(head);
    
    return 0;
}