#include<bits/stdc++.h>
using namespace std;

string solve(string s1, string s2){
    if(s1 + s2 != s2 + s1)return "";
    else if(s1 == s2) return s1;
    else if(s1.length() > s2.length()){
        return solve(s1.substr(s2.length()), s2);
    }
    else{
        return solve(s1, s2.substr(s1.length()));
    }
}

int main(){
    string s1, s2;cin >> s1;cin >> s2;
    // int n = s1.size(), m = s2.size();
    cout<<solve(s1, s2)<<'\n';
    return 0;

}