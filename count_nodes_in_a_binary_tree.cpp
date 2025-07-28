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

Node* input() {
    int val;

    cin >> val;

    Node* root = new Node(val);

    queue<Node*> q;

    q.push(root);

    while(!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int left, right;

        cin >> left >> right;

        
        Node *myLeft, *myRight;
        
        if(left == -1) myLeft = NULL;
        else myLeft = new Node(left);

        if(right == -1) myRight = NULL;
        else myRight = new Node(right);
        
        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    return root;
}

int count_node(Node* root) {
    if(root == NULL)
        return 0;

    int left = count_node(root->left);
    int right = count_node(root->right);

    return left + right + 1;
}

int main () {
    Node* root = input();

    cout << count_node(root);

    return 0;
}