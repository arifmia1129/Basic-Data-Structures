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

int sum = 0;

void calculateSum(Node* root) {
    if(root == NULL) return;

    if(root->left != NULL || root->right != NULL) sum += root->val;

    calculateSum(root->left);
    calculateSum(root->right);
}

int main () {

    sum = 0;

    Node* root =  takeInput();

    if(root == NULL) {
        cout << sum << endl;
    }else {
        calculateSum(root);

        cout << sum << endl;
    }

    return 0;
}