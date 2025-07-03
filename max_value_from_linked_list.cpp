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

void printMax(Node* tmp) {
    int maxVal = INT_MIN;

    while(tmp != NULL) {
        if(tmp->val > maxVal) {
            maxVal =  tmp->val;
        }

        tmp = tmp->next;
    }

    cout << "Max: " << maxVal << endl;
}

int main () {

    Node* head = NULL;
    Node* tail = NULL;



    while(true) {
        int x;

        cin >> x;

        if(x == -1) {
            break;
        }
        

       insertAtTail(head, tail, x);
    }


    printMax(head);


    return 0;
}