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

void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void countSize(Node* head) {
    Node* tmp = head;

    int count = 0;

    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    cout << "The size of current linked list: " << count << endl;
}

void checkDuplicate(Node* head) {
    Node* tmp = head;

    int a[101] = {0};

    while (tmp != NULL)
    {
       a[tmp->val]++;
       tmp = tmp->next;
    }

    int isDuplicate = 0;

    for(int i = 1; i <= 100; i++) {
        if(a[i] > 1) {
            isDuplicate = 1;
            break;
        }
    }

    if(isDuplicate) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
}

int main () {
    int val;

    int headVal = 0;


    Node* head = NULL;
    Node* currentNode = NULL;


    while (cin >> val)
    {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            currentNode = newNode;
        }else {
            currentNode->next = newNode;
            currentNode = newNode;
        }
    }

    // printList(head);
    // countSize(head);
    checkDuplicate(head);
    

    return 0;
}