#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define N 4
using namespace std;

bool isSafe(int board[N][N], int row, int col) {
	
	int i,j;
	for(i=0;i<col;i++) {
		if(board[row][i]==1) 
			return false;
	}
	
	for(i=row,j=col;i>=0,j>=0;i--,j--) {
		if(board[i][j]==1) 
			return false;
	}
	
	for(i=row,j=col;j>=0,i<N;i++,j--) {
		if(board[i][j]==1) 
			return false;
	}
	
	return true;
}

bool solveNQUtil(int board[N][N], int col) {
	
	if(col==N) 
		return true;
	
	int i;
	for(i=0;i<N;i++) {
		
		if(isSafe(board,i,col)) {
			board[i][col] = 1;
			if(solveNQUtil(board,col+1)) {
				return true;
			}
			board[i][col] = 0;
		}
	}
	return false;
}

bool solveNQ()
{
    int board[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
 
    if ( solveNQUtil(board, 0) == false )
    {
      printf("Solution does not exist");
      return false;
    }
 
    for(int i=0;i<N;i++) {
    	cout << "\n";
	for(int j=0;j<N;j++) {
		cout << board[i][j] << " ";	
	}
    }
    cout << endl;
    return true;
}

int main() {
	// your code goes here
	solveNQ();
    return 0;
}
