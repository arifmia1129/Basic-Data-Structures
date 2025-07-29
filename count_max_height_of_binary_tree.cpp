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

    queue<Node*> q;

    Node* root = new Node(rootVal);

    q.push(root);

    while(!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int leftVal, rightVal;

        cin >> leftVal >> rightVal;

        Node *myLeft, *myRight;

        if(leftVal == -1) myLeft = NULL;
        else myLeft = new Node(leftVal);

        if(rightVal == -1) myRight = NULL;
        else myRight = new Node(rightVal);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);

    }

    return root;
}

int maxHeightCount(Node* root) {
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 0;

    int leftMax = maxHeightCount(root->left);
    int rightMax = maxHeightCount(root->right);

    return max(leftMax, rightMax) + 1;
}

int main () {
    Node* root = takeInput();

    cout << "Max height is: " << maxHeightCount(root);
    
    return 0;
}