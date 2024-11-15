#include<bits/stdc++.h>
using namespace std;

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}


void DFS(vector<int> adj[], int Node, vector<int> &vis, vector<int> &ans) {
    vis[Node] = 1;
    ans.push_back(Node);

    for(auto it: adj[Node]) {
        if(!vis[it]) {
            DFS(adj,it,vis,ans);
        }
    }
}

int main() {
    vector<int> adj[9];
    addEdge(adj,1,2);
    addEdge(adj,1,3);   
    addEdge(adj,2,5);   
    addEdge(adj,2,6);   
    addEdge(adj,4,3);   
    addEdge(adj,7,3);   
    addEdge(adj,4,8);   
    addEdge(adj,7,8);

    /*
         1
        / \
       2  3----4
      / \ |    |
     5  6 7----8
    */   

    int Nodes = 1;
    vector<int> vis(9,0);
    vector<int> ans;
    DFS(adj,Nodes,vis,ans);
    printAns(ans);
    
    return 0;
}