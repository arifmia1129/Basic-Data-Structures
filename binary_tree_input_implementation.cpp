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

Node* take_input() {
    
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

void level_print(Node* root) {
    queue<Node*> q;

    q.push(root);

    while(!q.empty()) {
        Node* front = q.front();
        q.pop();

        cout << front->val << " ";

        if(front->left) q.push(front->left);
        if(front->right)q.push(front->right);
    }
}



int main () {

    Node* root = take_input();
    
    level_print(root);
    
    return 0;
}