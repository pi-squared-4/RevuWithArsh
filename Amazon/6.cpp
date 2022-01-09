#include<bits/stdc++.h>
using namespace std;

vector<int > solve(int *arr, int n, int k){
    vector<int > v;
    deque<int > q(k);
    int i = 0;
    for(i = 0; i < k; i++){
        while(!q.empty() && arr[i] >= arr[q.back()]) q.pop_back();
        q.push_back(i);
    }
    for(; i < k; i++){
        v.push_back(arr[q.front()]);
        while(!q.empty() && q.front() <= (i-k)) q.pop_front();
        while(!q.empty() && arr[i] > arr[q.back()]) q.pop_back();
        q.push_back(i);
    }
    v.push_back(arr[q.front()]);
    return v;
}

int main(){
    int n, k;cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n;){cin >> arr[i++];}
    vector<int > output = solve(arr, n, k);
    return 0;
    
}