#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& mat)
{
    // Your code goes here
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(mat[start++][i],mat[end--][i]);
        }
    }
}
