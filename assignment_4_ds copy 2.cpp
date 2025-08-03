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

vector<int> v;

void findLeaf(Node* root) {
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) v.push_back(root->val);

    findLeaf(root->left);
    findLeaf(root->right);
}

int main () {
    Node* root = takeInput();

    findLeaf(root);

    if(v.empty()) {
        cout << 0;
    }else{
        sort(v.begin(), v.end());
        while(!v.empty()) {
        cout << v.back() << " ";
        v.pop_back();
        }
    }

    return 0;
}