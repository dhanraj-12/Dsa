#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i<m; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    /*
        1---2
        |   | \ 
        |   |  5
        |   | /
        3---4


        bfs --->  1 2 3 4 5
        n-->5, m-->6
        input --->
        5 6
        2 1
        1   3
        2 4
        2 5
        3 4
        4 5

    */
    vector<int> bfs;
    queue<int> q;
    vector<int> visited(n,0);
    visited[1] = 1;
    q.push(1);
    while(!q.empty()) {
        int node = q.front();
        q.pop();

        bfs.push_back(node);
        for(auto it: adj[node]) {
            if(!visited[it]) {
                visited[it] = 1;
                q.push(it);
            }
        }
    }


    for(int i = 0; i<bfs.size(); i++) {
        cout << bfs[i] << " ";
    }
    cout << endl;


    return 0;
}