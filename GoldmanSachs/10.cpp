#include<bits/stdc++.h>
using namespace std;

vector<int > solve(int n, vector<int > arr){
    priority_queue<int, vector<int >, greater<int > > q;
    for(int i = 0; i < n; i++){
        q.push(arr[i]);
        if(q.size() > 10)q.pop();
    }
    vector<int > output;
    while(!q.empty()){
        output.emplace_back(q.top());
        q.pop();
    }
    return output;
}

int main(){
    int n;cin >> n;
    vector<int > arr(n);
    for(int i = 0; i < n;){cin>>arr[i++];}
    // cout<<solve(n, arr)<<'\n';
    vector<int > output = solve(n, arr);
}