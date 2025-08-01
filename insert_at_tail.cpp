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

    while (tmp != NULL)
    {
        /* code */
       cout << tmp->val << endl;

       tmp = tmp->next;
    }
    
}

void insert_at_tail(Node* head, int val) {
    Node* new_node = new Node(val);

    if(head == NULL) {
        head = new_node;
        return;
    }

    Node* tmp = head;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
   
    tmp->next = new_node;

}

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);

    print_linked_list(head);
    
    return 0;
}