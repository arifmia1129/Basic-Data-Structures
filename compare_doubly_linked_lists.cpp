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

void forward_print(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

int main () {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int which_list = 1;

    int val;

    while(true) {
        cin >> val;

        if(val == -1) {
            which_list++;
            if(which_list > 2) break;
            continue;
        }

        if(which_list == 1) {
            insert_at_tail(head1, tail1, val);
        }else {
            insert_at_tail(head2, tail2, val);
        }
    }

    check_same(head1, head2);
    
    return 0;
}