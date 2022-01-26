#include<bits/stdc++.h>
using namespace std;

string solve(string s, int k){
    int n = s.size(), maxx = INT_MIN;
    for(int j = 0; j < k; j++){
        int ind = -1;
        for(int i = n - 1; i >= j; i--){
            if(maxx < s[i] - '0'){
                ind = i;
                maxx = s[i] - '0';
            }
        }swap(s[j], s[ind]);
    }
    cout<<s<<'\n';
    return s;
}

int main(){
    string s;cin >> s;
    int k; cin >> k;
    cout<<s<<'\n';
    cout<<solve(s, k)<<'\n';
    return 0;
}