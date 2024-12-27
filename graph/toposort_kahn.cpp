#include<bits/stdc++.h>
using namespace std;

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}



int main() {
    vector<int> toposort;
    vector<int> adj[6];
	addEdge(adj,5,0);
	addEdge(adj,5,2);
	addEdge(adj,4,0);
	addEdge(adj,4,1);
	addEdge(adj,3,1);
	addEdge(adj,2,3);
    
    queue<int> q;
    vector<int> indegree(6,0);
    for(int i = 0; i<6; i++) {
        for(auto it: adj[i]) {
            indegree[it]++;
        }
    }

    for(int i = 0; i<6; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        toposort.push_back(node);
        for(auto it: adj[node]) {
            indegree[it]--;
            if(indegree[it] == 0) {
                q.push(it);
            }
        }
    }

    printAns(toposort);
    return 0;
}