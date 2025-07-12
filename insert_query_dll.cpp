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


void forward_print(list<int> l) {
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
}
void backward_print(list<int> l) {
    l.reverse();
    for(int val : l) {
        cout << val << " ";
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
   list<int> l;

   
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, v;

        cin >> x >> v;

        if(x != 0 && x > l.size()) {
            cout << "Invalid" << endl;
        }else {
            if(x == 0) {
                l.push_front(v);
                forward_print(l);
                backward_print(l);
            }else if(x == l.size()) {
                l.push_back(v);
                forward_print(l);
                backward_print(l);
            }else {
                l.insert(next(l.begin(), x), v);
                forward_print(l);
                backward_print(l);
            }
        }
    }
   

    
    return 0;
}