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

Node* takeInput() {
    int rootVal;

    cin >> rootVal;

    Node* root = new Node(rootVal);

    queue<Node*> q;

    q.push(root);

    while(!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int leftVal, rightVal;
        Node *myLeft, *myRight;

        cin >> leftVal >> rightVal;

        if(leftVal != -1) myLeft = new Node(leftVal);
        else myLeft = NULL;
        if(rightVal != -1) myRight = new Node(rightVal);
        else myRight = NULL;

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);
    }

    return root;
}

void printTree(Node* root) {
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* front = q.front();
        q.pop();

        cout << front->val << " ";

        if(front->left != NULL) q.push(front->left);
        if(front->right != NULL) q.push(front->right);
    }
}


void insert(Node* &root, int val) {
    if(root == NULL) {
        root = new Node(val);
        return;
    }
        

    if(val < root->val) {
        if(root->left == NULL)
            root->left = new Node(val);
        else 
            insert(root->left, val);
    }else {
         if(root->right == NULL)
            root->right = new Node(val);
        else 
            insert(root->right, val);
    }
}


int main () {
    Node* root = takeInput();

    int val;

    cin >> val;

    insert(root, val);

   
    printTree(root);

    return 0;
}