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

int countSize(Node* head) {
    Node* tmp = head;

    int count = 0;

    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    // cout << "The size of current linked list: " << count << endl;
    return count;
}

void isSorted(Node* head) {
    Node* tmp = head;

    int isSorted = 1;

    while(tmp != NULL && tmp->next != NULL) {
        if(tmp->val > tmp->next->val) {
            isSorted = 0;
            break;
        }
        tmp = tmp->next;
    }

    if(isSorted) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

void printMiddle(Node* head) {
    int size = countSize(head);
    
    int avg = size / 2;

    Node* tmp = head;

    int adjustVal = size % 2 == 0 ? 1 : 0;

    for(int i = 0; i < avg - adjustVal; i++) {
            tmp = tmp->next;
    }

        

    if(size % 2 != 0) {
        cout << tmp->val << endl;
    }else {
         cout << tmp->val <<  " " << tmp->next->val << endl;
    }
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
    // checkDuplicate(head);
    // printMiddle(head);
    isSorted(head);
    

    return 0;
}