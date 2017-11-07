#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <limits.h>
using namespace std;

int minPalPartion(char* str) {
	
	int l = strlen(str);
	if(l==0 || l==1)
		return 0;
	if(l==2) {
		if(str[0]==str[1]) return 0;
		return 1;
	}
	int n=l;
	bool pal[n][n];
	int part[n][n],i,j,k,len;
	for(i=0;i<n;i++) {
		pal[i][i]=true;
		part[i][j]=0;
	}
	for(len=2;len<=l;len++) {
		for(i=0;i<l-len+1;i++) {
			j=i+len-1;
			
			if(len==2) {
				pal[i][j] = (str[i]==str[j]);
			} else {
				pal[i][j] = (str[i]==str[j]) && pal[i+1][j-1];
			}
		}
	}
	int c[n];
	for(i=0;i<l;i++) {
		if(pal[0][i]) 
			c[i]=0;
		else {
			c[i] = INT_MAX;
			for(j=0;j<i;j++) {
				if(pal[j+1][i]==true && c[i] > c[j]+1) {
					c[i] = c[j]+1;
				}
			}
		}	
			
	}
	return c[n-1];
	
}

int main() {
	// your code goes here
	 char str[] = "ababbbabbababa";
   printf("Min cuts needed for Palindrome Partitioning is %d",
           minPalPartion(str));
	return 0;
}
