#include <iostream>
#include <unordered_set>
#include <vector>
#include <stdio.h>
#include <limits.h>
#include <stack>
#include <algorithm>
using namespace std;

int print_long_seq(const vector<int>& arr) {
	
	unordered_set<int> elements(arr.begin(), arr.end());
	unordered_set<int> visited;
	int max_comp_size=0;
	int min_comp_element=INT_MAX;
	for(int e : elements) {
		
		if(visited.find(e) != visited.end()) continue;
		stack<int> s;
		int min_element = INT_MAX;
		int size = 0;
		s.push(e);
		cout << e << "\n";
		while(!s.empty()) {
			
			int u = s.top();
			s.pop();
			visited.insert(u);
			size++;
			cout << e << " " << size << "\n";
			min_element = min(min_element,u);
			
			for(int adj: {u+1, u-1}) {
				
				if(elements.find(adj) != elements.end() 
					&& visited.find(adj) == visited.end()) {
						//size++;
						s.push(adj);
					}
			}
		}
		cout << e << size << " asn " << max_comp_size << "\n";
		if(size > max_comp_size) {
			max_comp_size = size;
			min_comp_element = min_element;
		}
	}
	cout << max_comp_size << endl;
	return max_comp_size;
}

int main() {
	// your code goes here
	print_long_seq({100, 4, 200, 1, 3, 2});
	return 0;
}
