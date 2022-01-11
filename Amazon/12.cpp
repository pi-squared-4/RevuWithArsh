#include<bits/stdc++.h>
using namespace std;

string solve(long long n){
    string s = "";
    while(n != 0){
        n--;
        int r = n % 26;
        s = string(1, r + 'A') + s;
        n = n / 26;
    }
    return s;
}

int main(){
    long long n; cin >> n;
    cout<<solve(n)<<'\n';
    return 0;
}