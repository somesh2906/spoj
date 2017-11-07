#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


int lenOfLongestGP(int set[], int n) {
	
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) (set[1]%set[0])==0 ? 2:1;
	
	int L[n][n];
	for(int i=0;i<n;i++) {
		if(set[n-1]%set[i]==0) {
			L[i][n-1]=2;
		} else {
			L[i][n-1]=1;
		}
	}
	//L[n-1][n-1]=1;
	int llgp=1;
	for(int j=n-2;j>=1;j--) {
		
		int i=j-1,k=j+1;
		while(i>=0 && k<n) {
			
			if(set[i]*set[k] < set[j]*set[j]) {
				
				++k;
			} else 
			if(set[i]*set[k] > set[j]*set[j]) {
				
				if(set[j]%set[i]==0) 
					L[i][j]=2;
				else 
					L[i][j]=1;
				i--;	
			} else {
				L[i][j] = L[j][k]+1;
				if(llgp<L[i][j]) {
					llgp=L[i][j];
				}
				i--;
				k++;
			}
		}
		while(i>=0) {
			if (set[j] % set[i] == 0)
                L[i][j] = 2;
            else
                L[i][j] = 1;
            --i;
		}
	}
	return llgp;
}


	// your code goes here
	
int main() {
    int set1[] = {1, 3, 9, 27, 81, 243};
    int n1 = sizeof(set1)/sizeof(set1[0]);
    cout << lenOfLongestGP(set1, n1) << "\n";
 
    int set2[] = {1, 3, 4, 9, 7, 27};
    int n2 = sizeof(set2)/sizeof(set2[0]);
    cout << lenOfLongestGP(set2, n2) << "\n";
 
    int set3[] = {2, 3, 5, 7, 11, 13};
    int n3 = sizeof(set3)/sizeof(set3[0]);
    cout << lenOfLongestGP(set3, n3) << "\n";
 
    return 0;
}
