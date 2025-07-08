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


void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int findMaxMin(Node* head, string isFor) {
    Node* tmp = head;

    int val = isFor == "max" ? INT_MIN : INT_MAX;

    while(tmp != NULL) {
        if(isFor == "max") {
            if(tmp->val > val) {
                val = tmp->val;
            }
        }else {
            if(tmp->val < val) {
                val = tmp->val;
            }
        }

        tmp = tmp->next;
    }

    return val;
}



int main () {
    Node* head = NULL;
    Node* tail = NULL;

    while(true) {
        int val;

        cin >> val;

        if(val == -1) {
            break;
        }

        insertAtTail(head, tail, val);
    }

    int max = findMaxMin(head, "max");
    int min = findMaxMin(head, "min");

    int dif = max - min;

    cout << dif << endl;
    
    return 0;
}