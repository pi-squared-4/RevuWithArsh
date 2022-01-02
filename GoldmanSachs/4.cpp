#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    int n = s.size();
    string out = "";
    char c = s[0];int count = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){count++;}
        else{
            out = out + c + to_string(count);
            count = 1;c = s[i];
        }
    }
    out = out + c + to_string(count);
    cout<<out<<'\n';
}