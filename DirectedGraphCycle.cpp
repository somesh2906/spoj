#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iterator>
using namespace std;

int n=100000;

void addEdge(vector<int> g[], int a, int b) {
	
	g[a].push_back(b);
}

int dfs(vector<int> g[], int i, vector<int>& v, vector<int>& recStack) {
	
	if(v[i]==1) 
		return false;	
	v[i]=1;
	recStack[i]=1;
	for(int itr=0;itr<g[i].size();itr++) {

		if(v[g[i][itr]]==0 && dfs(g,itr,v,recStack)) 
			return true;
		else if(recStack[g[i][itr]]==1) 
			return true;
	}
	recStack[i]=0;
	return false;
}

bool checkCycle(vector<int> g[], int n) {
	
	if(n==0) {
		return false;
	}
	bool ans = false;
	
	vector<int> v(n);
	vector<int> recStack(n);
	for(int i=0;i<n;i++) {
		
		v[0]=0;
		recStack[0]=0;
	}
	
	for(int i=0;i<n;i++) {
			
		if(dfs(g,i,v,recStack)) {
			ans = true;
			cout << ans << endl;
			return ans;
		}
	}
	
	ans = false;
	cout << ans << endl;
	return false;
}

int main() {
	// your code goes here
	n=4;
	vector<int> g[n];
	addEdge(g,0, 1);
	addEdge(g,0, 2);
	addEdge(g,1, 2);
	addEdge(g,2, 0);
	addEdge(g,2, 3);
	addEdge(g,3, 3);
	bool ans = checkCycle(g,n);
	
	return 0;
}
