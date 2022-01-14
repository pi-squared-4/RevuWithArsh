#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;Node* right;
    Node* nextRight;
};


int ctr;
int solve(Node* root, int X){
    if(root == nullptr){
	    return 0;
	}
	int l = solve(root->left,X);
	int r = solve(root->right,X);
	int sum = root->data + l + r;
	if(sum == X){
	    ctr++;
	}
	return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	ctr = 0;
	int x = solve(root,X);
	return ctr;
}