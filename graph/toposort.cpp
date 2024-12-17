#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}


void dfs(vector<int> adj[],vector<int> &vis, stack<int> &st, int start) {
	vis[start] = 1;
	for(auto it : adj[start]) {

		if(!vis[it]) {
			dfs(adj,vis,st,it);
		}
	}
	st.push(start);

}


void toposort(vector<int> adj[],vector<int> &vis, stack<int> &st, int totalnode) {
	
	for(int i = 0; i<totalnode; i++) {
		if(!vis[i]) {
			dfs(adj,vis,st,i);
		}
	}

}


int main() {
	int totalnode = 6;
	vector<int> adj[totalnode];
	addEdge(adj,5,0);
	addEdge(adj,5,2);
	addEdge(adj,4,0);
	addEdge(adj,4,1);
	addEdge(adj,3,1);
	addEdge(adj,2,3);
	vector<int> vis(totalnode,0);
	stack<int> st;
	toposort(adj,vis,st,6);		

	vector<int> ans;
	while(!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}

	printAns(ans);

}
