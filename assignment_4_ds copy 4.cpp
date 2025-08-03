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



int calculateDepth(Node* root) {
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 0;

    int leftCount = calculateDepth(root->left);
    int rightCount = calculateDepth(root->right);

    return max(leftCount, rightCount) + 1;
}






int main () {
    Node* root = takeInput();

    int x;

    cin >> x;

    if(calculateDepth(root) < x) {
        cout << "Invalid" << endl;
    }else {
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while(!q.empty()) {
            pair<Node*, int> front = q.front();
            q.pop();

            if(front.second == x) {
                cout << front.first->val << " ";
            }

            if(front.first->left != NULL) q.push({front.first->left, front.second + 1});
            if(front.first->right != NULL) q.push({front.first->right, front.second + 1});
        }
    }

    

    return 0;
}