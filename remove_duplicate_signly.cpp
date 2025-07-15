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

void printList(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void removeDuplicate(Node* head) {
   Node* l = head;
   while(l != NULL) {
    Node* r = head;

    while(r->next != NULL) {
        if(l->val == r->next->val) {
            Node* deleteNode = r->next;
            r->next = r->next->next;
            delete deleteNode;
            r = r->next;
        }else {
            r = r->next;
        }
    }

    l = l->next;
   }
}



    void reverse(Node* &head, Node* tmp) {
        if(tmp->next == NULL) {
            head = tmp;
            return;
        }

        reverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    bool checkPalindrome(Node* tmp1, Node* tmp2) {
        bool isPalindrome = true;
        int count = 0;
        int sz = calculateSize(tmp1);

        int avg = sz/2;

        cout << "sz" << " " << sz << "avg" << " " << avg << endl;

        while(tmp1 != NULL && tmp2 != NULL && count <= avg) {
            if(tmp1->val != tmp2->val) {
                cout << tmp1->val << endl;
                cout << tmp2->val << endl;
                isPalindrome = false;
            }
            count++;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        return isPalindrome;
    }
// 1 2 1 1
// 2

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

    Node* tmpList = head;
    reverse(head, head);


    printList(tmpList);
    // cout << checkPalindrome(tmpList, head);


    return 0;
}