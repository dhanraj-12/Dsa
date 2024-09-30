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


vector<int> itretive_pre(struct Node* root) {
    vector<int> ans;
    stack<struct Node*> st;
    st.push(root);
    while(!st.empty()) {
        struct Node* node = st.top();
        st.pop();
        ans.push_back(node->data);
        if(node->right != NULL) st.push(node->right);
        if(node->left != NULL)  st.push(node->left); 
    }

    return ans;
}


int main() {

    struct Node *tree = new Node(1);
    tree->left = new Node(2);
    tree->right = new Node(3);
    tree->left->left = new Node(4);
    tree->left->right = new Node(5);
    tree->right->left = new Node(6);
    tree->right->right = new Node(7);
    vector<int> ans = itretive_pre(tree);
    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
 
    return 0;
}