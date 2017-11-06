#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

Node* newNode(int data) {
	
	Node* node = new Node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
 
void diagnolPrintUtil(Node* root, map<int, vector<int> >& m, int slope) {
	
	if(root==NULL) 
		return;
	m[slope].push_back(root->data);
	diagnolPrintUtil(root->left,m,slope+1);
	diagnolPrintUtil(root->right,m,slope);
	
}

void diagonalPrint(Node* root) {
	
	if(root==NULL) 
		return;
	map<int, vector<int> > m;
	
	int slope = 0;
	diagnolPrintUtil(root, m, slope);
	for(auto it = m.begin();it!=m.end();++it) {
		
		vector<int> v = it->second;
		cout << it->first << "\n";
		for(int j=0;j<v.size();j++) {
			cout << v[j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

int main() {
	// your code goes here
	
	Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    diagonalPrint(root);
	return 0;
}
