#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int solve(string s){
    int n = s.size();
    int dp[n + 1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        if(s[i-1]>'0'){dp[i] = dp[i - 1];}
        if(s[i-2] == '1' || s[i-2] == '2' && s[i-1] < '7'){dp[i] = (dp[i] + dp[i-2])%mod;}
    }return dp[n];
}

int main(){
    string s;
    cin >> s;
    cout<<solve(s)<<'\n';

}