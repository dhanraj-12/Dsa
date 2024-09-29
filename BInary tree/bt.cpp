#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createtree(Node* root) {
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    root = new Node(data);
    if(data == -1) {
        return NULL;
    }
    cout << "Enter the data for for left node of" << data << ":" << endl;
    root->left = createtree(root->left);
    cout << "Enter the data for for right node of" << data << ":" << endl;
    root->right = createtree(root->right);
    return root;
}

int main() {
    Node *root = NULL;
    root = createtree(root);


    return 0;
}