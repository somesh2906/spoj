#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

int maximum(int a, int b) {

	return a>b?a:b;
}

int main() {

	int n,m,i,j,k,l;

	while(1) {
		scanf("%d %d",&n,&m);
		if(n==0 && m==0) break;
		int b[n][m],y[n][m];
		int ans[n][m];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				scanf("%d",&y[i][j]);
				if(j>0)
					y[i][j]+=y[i][j-1];
				ans[i][j]=0;
			}
		}

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				scanf("%d",&b[i][j]);
				if(i>0)
					b[i][j]+=b[i-1][j];
			}
		}
		ans[0][0] = maximum(y[0][0], b[0][0]);

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {

				if(i==0 && j==0) continue;
				int count1=b[i][j];
				int count2=y[i][j];
				if(j>0) {
					count1 += ans[i][j-1];
				}
				if(i>0) {

					count2 += ans[i-1][j];
				}
				ans[i][j] = maximum(count2,count1);
			}
		}
		printf("%d\n", ans[n-1][m-1]);
	}
}