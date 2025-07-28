#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;
    
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node* root) {
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        // step-1
        Node* front = q.front();
        q.pop();

        // step-2
        cout << front->val << " ";

        // step-3
       if(front->left != NULL) {
         q.push(front->left);
       }
       if(front->right != NULL) {
         q.push(front->right);
       }
    }
}

int main () {
    Node* root = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);
    Node* e = new Node(6);
    Node* f = new Node(7);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    level_order(root);
    
    return 0;
}