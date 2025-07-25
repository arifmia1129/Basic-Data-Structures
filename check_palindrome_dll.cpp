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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);

    if(head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}


int calculate_size(Node* tmp) {
    int size = 0;

    while(tmp != NULL) {
        size++;
        tmp = tmp->next;
    }

    return size;
}


void check_palindrome(Node* head, Node* tail) {
    bool is_palindrome = true;
    for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev) {
       if(i->val != j->val) {
        is_palindrome = false;
        break;
       }
    }

    if(is_palindrome) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }

        insert_at_tail(head, tail, val);
        
    }

    check_palindrome(head, tail);

    
    return 0;
}