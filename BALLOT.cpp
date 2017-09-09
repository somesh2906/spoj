#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

int arr[500001],n,b;

int check(int val) {

	int i,count=0;
	for(i=0;i<n;i++) {

		if(arr[i] >= val) {

			count+=(arr[i]/val);
			if(arr[i]%val > 0) {
				count++;
			}
		}
		else {
			count++;
		}
	}
	return count;
}

int b_search(int h) {

	int mid,l=1;
	while(l<h) {

		mid = l +(h-l)/2;

		if(check(mid) <= b) {

			h = mid;
		}
		else {
			l = mid+1;
		}
	}
	return l;
}

int main() {
	// your code goes here
	int i,j,k,l,max=INT_MIN;
	while(1) {

		scanf("%d %d",&n,&b);
		if(n==-1 && b==-1) {
			break;
		}
		for(i=0;i<n;i++) {

			scanf("%d",&arr[i]);
			if(max<arr[i]) {
				max = arr[i];
			}
		}

		int res = b_search(max);
		printf("%d\n",res);

	}	
	return 0;
}