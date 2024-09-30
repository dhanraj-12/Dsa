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


  vector<vector<int>> levelOrder(struct Node* root) {
        vector<vector<int>> ans;
        queue<struct Node*> q;
        if(root == NULL) return ans;
        q.push(root);
        while(!q.empty()) {
            int a = q.size();
            vector<int> level;
            for(int i = 0; i<a; i++) {
                struct Node *node = q.front();
                q.pop();
                if(node->left != NULL) {
                    q.push(node->left);
                }
                if(node->right != NULL) {
                    q.push(node->right);
                }
                level.push_back(node->data);
            }
            ans.push_back(level); 
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
    vector<vector<int>> ans  = levelOrder(tree);
    for(int i = 0; i<ans.size(); i++) {
        for(int j = 0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}