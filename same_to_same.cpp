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




void isSame(Node* head1, Node* head2) {
    Node* tmp1 = head1;
    Node* tmp2 = head2;

    bool isSame = true;

    while (tmp1 != NULL && tmp2 != NULL) 
    {
        if(tmp1->val != tmp2->val) {
            isSame = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    
    if(isSame) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}



int main () {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int whichFor = 1;
    
    while(true) {
            int val;

            cin >> val;

            if(val == -1) {
                whichFor++;
                if(whichFor > 2) break;
                continue;;
            }

            if(whichFor == 1) {
                insertAtTail(head1, tail1, val);
            }else{
                insertAtTail(head2, tail2, val);
            }
    }

    if(calculateSize(head1) != calculateSize(head2)) {
        cout << "NO" << endl;
    } else {
        isSame(head1, head2);
    }

    
    return 0;
}