#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
using namespace std;

void rearrange(int arr[], int n, int x) {
	
	multimap<int, int> m;
	for(int i=0;i<n;i++) {
		m.insert(make_pair(abs(arr[i]-x), arr[i]));
	}
	for(map<int, int>:: iterator it = m.begin();it!=m.end();++it) {
		
		cout << it->second << " ";
	}
	cout << endl;
}

int main() {
	// your code goes here
	int arr[] = {10, 5, 3, 9 ,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    rearrange(arr, n, x);
	return 0;
}
