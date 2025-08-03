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

        int left, right;

        Node *myLeft, *myRight;

        cin >> left >> right;

        if(left == -1) myLeft = NULL;
        else myLeft = new Node(left);

        if(right == -1) myRight = NULL;
        else myRight = new Node(right);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);
    }

    return root;
}

void leftSide(Node* root) {
   if(root == NULL) return;

    if(root->left) {
        leftSide(root->left);
    }else if(root->right) {
        leftSide(root->right);
    }

    cout << root->val << " ";
}

void rightSide(Node* root) {
    if(root == NULL) return;

    cout << root->val << " ";

    if(root->right) {
        rightSide(root->right);
    }else if(root->left) {
        rightSide(root->left);
    }
}

int main () {
    Node* root = takeInput();

    if(root == NULL) {
        cout << 0 << " ";
    }else {
        if(root->left != NULL)leftSide(root->left);
        cout << root->val << " ";
       if(root->right != NULL) rightSide(root->right);
    }

    return 0;
}