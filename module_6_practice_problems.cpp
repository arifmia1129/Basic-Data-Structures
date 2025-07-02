// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;
    
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_list(Node* head) {
//     Node* tmp = head;

//     while(tmp != NULL) {
//         cout << tmp->val << endl;

//         tmp = tmp->next;
//     }
// }

// int main () {
//     int n;

//     cin >> n;


//     if(n == 0) {return 0;};


//     int val;

//     cin >> val;


//     Node* head = new Node(val);
//     Node* currentNode = head;

//     for(int i = 2; i <= n; i++) {
//         int val;

//         cin >> val;

//         Node* newNode = new Node(val);

//         currentNode->next = newNode;

//         currentNode = newNode;
//     }

//     print_list(head);
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;
    
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void countElement(Node* head) {
//     Node* tmp = head;

//     int sumOfCount = 0;
//     while(tmp != NULL) {
//         sumOfCount++;
//         tmp = tmp->next;
//     }

//     cout << sumOfCount;
// }

// int main () {
//     int n;

//     cin >> n;


//     if(n == 0) {return 0;};


//     int val;

//     cin >> val;


//     Node* head = new Node(val);
//     Node* currentNode = head;

//     for(int i = 2; i <= n; i++) {
//         int val;

//         cin >> val;

//         Node* newNode = new Node(val);

//         currentNode->next = newNode;

//         currentNode = newNode;
//     }

//     countElement(head);
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;
    
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_list(Node* head) {
//     Node* tmp = head;

//     while(tmp != NULL) {
//         cout << tmp->val << endl;

//         tmp = tmp->next;
//     }
// }

// void insertAtHead(Node* &head, int val) {
//     Node* newNode = new Node(val);

//     newNode->next = head;
//     head = newNode;
// }

// int main () {
//     int n;

//     cin >> n;


//     if(n == 0) {return 0;};


//     int val;

//     cin >> val;


//     Node* head = new Node(val);
//     Node* currentNode = head;

//     for(int i = 2; i <= n; i++) {
//         int val;

//         cin >> val;

//         Node* newNode = new Node(val);

//         currentNode->next = newNode;

//         currentNode = newNode;
//     }

//     int insertVal;
//     cin >> insertVal;

//     insertAtHead(head, insertVal);

//     print_list(head);
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;
    
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_list(Node* head) {
//     Node* tmp = head;

//     while(tmp != NULL) {
//         cout << tmp->val << endl;

//         tmp = tmp->next;
//     }
// }

// void insertAtTail(Node* &tail, int val) {
//     Node* newNode = new Node(val);

//     tail->next = newNode;
//     tail - newNode;
// }

// int main () {
//     int n;

//     cin >> n;


//     if(n == 0) {return 0;};


//     int val;

//     cin >> val;


//     Node* head = new Node(val);
//     Node* currentNode = head;
//     Node* tail = head;

//     for(int i = 2; i <= n; i++) {
//         int val;

//         cin >> val;

//         Node* newNode = new Node(val);

//         currentNode->next = newNode;

//         currentNode = newNode;

//         if(i == n) {
//             tail = currentNode;
//         }
//     }

//     int insertVal;
//     cin >> insertVal;

//     insertAtTail(tail, insertVal);

//     print_list(head);
    
//     return 0;
// }


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

void print_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;

        tmp = tmp->next;
    }
}

void insertAtSpecific(Node* head, int position, int val) {
    Node* newNode = new Node(val);

    Node* tmp = head;

    for(int i = 0; i < position - 1; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

}

int main () {
    int n;

    cin >> n;


    if(n == 0) {return 0;};


    int val;

    cin >> val;


    Node* head = new Node(val);
    Node* currentNode = head;
    Node* tail = head;

    for(int i = 2; i <= n; i++) {
        int val;

        cin >> val;

        Node* newNode = new Node(val);

        currentNode->next = newNode;

        currentNode = newNode;

        if(i == n) {
            tail = currentNode;
        }
    }

    int position;
    cin >> position;

    int insertVal;
    cin >> insertVal;

    insertAtSpecific(head,  position, insertVal);

    print_list(head);
    
    return 0;
}