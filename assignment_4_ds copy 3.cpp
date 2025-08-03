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

int calculateNode(Node* root) {
    if(root == NULL) return 0;

    int leftCount = calculateNode(root->left);
    int rightCount = calculateNode(root->right);

    return leftCount + rightCount + 1;
}

int calculateDepth(Node* root) {
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 1;

    int leftCount = calculateDepth(root->left);
    int rightCount = calculateDepth(root->right);

    return max(leftCount, rightCount) + 1;
}




int main () {
    Node* root = takeInput();


    if(pow(2, calculateDepth(root)) - 1 == calculateNode(root)) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}