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

class MyStack {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val) {
            sz++;
           Node* newNode = new Node(val);

           if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
           }
            
           tail->next = newNode;
           newNode->prev = tail;
           tail = newNode;
        }

        void pop() {
            sz--;
           Node* deleteNode = tail;
           tail = tail->prev;
           delete deleteNode;
           if(tail == NULL) {
            head = NULL;
            return;
           }
           tail->next = NULL;
        }

        int top() {
            return head->val;
        }

        int size() {
            return sz;
        }

        bool empty () {
            return head == NULL;
        }
};

int main () {

    MyStack lt;

   int n;

   cin >> n;

   while(n--) {
    int x;

    cin >> x;

    lt.push(x);
   }


   while (!lt.empty())
   {
    cout << lt.top() << endl;
    lt.pop();
   }
   
    
    return 0;
}