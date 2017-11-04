#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int a, int b) {
	
	v[a].push_back(b);
}

void dfs(vector<int> v[], int u, stack<int>& s, vector<bool>& visited) {
	
	visited[u]=true;
	for(int i=0;i<v[u].size();i++) {
		if(!visited[v[u][i]]) {
			dfs(v,v[u][i], s, visited);
		}
	}
	s.push(u);
}

void topologicalSort(vector<int> v[], int n) {
	
	
	if(n==0) 
		return;
	stack<int> s;
	vector<bool> visited(n);
	for(int i=0;i<n;i++) {
		
		visited[i]=false;
	}
	for(int i=0;i<n;i++) {
		
		if(!visited[i]) {
			dfs(v,i,s,visited);
		}
	}
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {
	// your code goes here
	
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 5, 2);
    addEdge(adj, 5, 0);
    addEdge(adj, 4, 0);
    addEdge(adj, 4, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);
    topologicalSort(adj,V);
    return 0;
}
