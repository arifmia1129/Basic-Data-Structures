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
void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);

    if(head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }

   new_node->next = head;
   head->prev = new_node;
   head = new_node;
}
void insert_at_any(Node* &head, int idx, int val) {
    Node* new_node = new Node(val);

    Node* tmp = head;

    for(int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }

    new_node->next = tmp->next->next;
    tmp->next = new_node;
    new_node->prev = tmp;
}


void forward_print(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void backward_print(Node* tail) {
    Node* tmp = tail;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int calculate_size(Node* tmp) {
    int size = 0;

    while(tmp != NULL) {
        size++;
        tmp = tmp->next;
    }

    return size;
}

void check_same(Node* tmp1, Node* tmp2) {

    if(calculate_size(tmp1) != calculate_size(tmp2)) {
        cout << "NO" << endl;
        return;
    }else {
        bool is_same = true;

        while(tmp1 != NULL && tmp2 != NULL) {
            if(tmp1->val != tmp2->val) {
                is_same = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        if(is_same) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

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

   
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, v;

        cin >> x >> v;

        if(x != 0 && x > calculate_size(head)) {
            cout << "Invalid" << endl;
        }else {
            if(x == 0) {
                insert_at_head(head, tail, v);
                forward_print(head);
                backward_print(tail);
            }else if(x == calculate_size(head)) {
                insert_at_tail(head, tail, v);
                forward_print(head);
                backward_print(tail);
            }else {
                insert_at_any(head, x, v);
                forward_print(head);
                backward_print(tail);
            }
        }
    }
   

    
    return 0;
}