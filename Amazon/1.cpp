#include<bits/stdc++.h>
using namespace std;

int solve(int k, int n, int arr[]){
    int dp[k + 1][n];
    memset(dp, 0, sizeof(dp));
    
}

int main(){
    int k, n;cin >> k >> n;
    int arr[n];
    for(int i = 0; i < n;){cin >> arr[i++];}
    cout<<solve(k, n, arr)<<'\n';

}