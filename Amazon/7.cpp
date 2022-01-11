#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    // int freq[26] = {0};
    unordered_map<char, int> mp;
    queue<char > q;
    string ans = "";
    char fnr = s[0];
    int n = s.size();
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
        q.push(s[i]);

        if(fnr != '#' && mp[fnr] == 1){
            ans += fnr;
        }else{
            fnr = '#';
            while(!q.empty() && mp[q.front()] != 1){q.pop();}
            if(!q.empty()){fnr = q.front();}
            cout<<fnr<<'\n';
            ans += fnr;
        }
    }return ans;


}

int main(){
    string a;cin >> a;
    cout<<solve(a)<<'\n';
}