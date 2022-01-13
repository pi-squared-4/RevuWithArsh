#include<bits/stdc++.h>
using namespace std;

vector<int > solve(int n, vector<int > arr){
    vector<int > out(n, 1);
    stack<int > s;
    s.push(0);
    for(int i = 0; i < n; i++){
        while(!s.empty() && arr[s.top()] <= arr[i]){s.pop();}
        int ans = (s.empty()) ? i+1: i - s.top();
        out[i] = ans;
        s.push(i);
    }
    return out;
}

int main(){
    int n; cin >> n;
    vector<int >  arr;
    for(int i = 0 ; i<n; i++){cin >> arr[i];}
    vector<int > output = solve(n, arr);
    return 0;
}