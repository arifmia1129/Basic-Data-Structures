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

bool isFound(Node* root, int val) {
    if(root == NULL) return false;

    if(root->val == val) return true;

    if(val < root->val ) {
        return isFound(root->left, val);
    }else {
        return isFound(root->right, val);
    }
}

int main () {
    Node* root = takeInput();

    int searchVal;

    cin >> searchVal;

    bool isFoundRes = isFound(root, searchVal);

    if(isFoundRes) {
        cout << "Found" << endl;
    }else {
        cout << "Not found" << endl;
    }

    return 0;
}