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

void Preorder_traversal(struct Node *root,vector<int> &arr) {
    if(root == NULL) {
        return;
    }

    arr.push_back(root->data);
    Preorder_traversal(root->left,arr);
    Preorder_traversal(root->right,arr);

}

/*
Input :…….A
 …………../ …….\
 ………..B ………..C
 ……../……\ 
 ……D……..E 

 
Output : ABDEC
*/

int main() {
    
    struct Node *tree = new Node(1);
    tree->left = new Node(2);
    tree->right = new Node(3);
    tree->left->left = new Node(4);
    tree->left->right = new Node(5);
    tree->right->left = new Node(6);
    tree->right->right = new Node(7);

    vector<int> ans;
    Preorder_traversal(tree,ans);
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    


    return 0;
}                           