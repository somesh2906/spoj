#include <iostream>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int ceilIndex(int a, vector<int> v, int r) {
	
	int l=-1;
	while((r-l)>1) {
		
		int mid = l+(r-l)/2;
		if(v[mid] >= a) {
			r =mid;
		} else {
			l = mid;
		}
	}
	return r;
}

int LIS(const vector<int>& arr, int n) {
	
	if(n==0) return 0;
	
	vector<int> tail(n);
	tail.push_back(arr[0]);
	int length = 1;
	for(int i=1;i<n;i++) {
		
		if(tail[0] > arr[i]) {
			tail[0] = arr[i];
		} else 
		if(arr[i]>tail[length-1]){
			
			tail[++length] = arr[i];
		} else {
			tail[ceilIndex(arr[i],tail,length-1)] = arr[i];
		}
	}
	return length;
	
}

int main() {
	// your code goes here
	vector<int> v{ 2, 5, 3, 7, 11, 8, 10, 13, 6 };
	cout << "Length of Longest Increasing Subsequence is " << LIS(v,v.size()) << "\n";
	return 0;
}
