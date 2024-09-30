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


vector<int> fun(struct Node *root) {
    vector<int> ans;
    stack<struct Node*> st;
    while(true) {
        if(root != NULL) {
            st.push(root);
            root = root->left;
        }else {
            if(st.empty()) break;
            root = st.top();
            st.pop();
            ans.push_back(root->data);
            root = root->right;
        }
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
    vector<int> ans = fun(tree);
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }    

    cout << endl;

    return 0;
}