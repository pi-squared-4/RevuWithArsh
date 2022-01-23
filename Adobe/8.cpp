#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int n = s.size();
    int f = 1;
    for(int i = 0; i < n; i++){
        if(int(s[i]) >= 48 && int(s[i]) <= 57){
            continue;
        }else{
            f = 0;
            break;
        }
    }if(!f){return -1;}
    int total = 0, k = 0;
    for(int i = n - 1; i >= 0; i--){
        total += s[i]*(pow(10, k));
        k++;
    }return total;
}

int main(){
    string s;cin >> s;
    int n = solve(s);
    cout<<n<<'\n';
    return 0;
}