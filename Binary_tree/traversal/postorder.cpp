#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    struct Node *left, *right;
    Node(int d) {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

void postorder(struct Node *root,vector<int> &arr) {
    if(root == NULL) {
        return;
    }

    postorder(root->left,arr);
    postorder(root->right,arr);
    arr.push_back(root->data);

}

int main() {

    struct Node *tree = new Node(1);
    tree->left = new Node(2);
    tree->right = new Node(3);
    tree->left->left = new Node(4);
    tree->left->right = new Node(5);
    tree->right->left = new Node(6);
    tree->right->right = new Node(7);
    vector<int> ans;
    postorder(tree,ans);
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}