#include<bits/stdc++.h>
using namespace std;

int solve(vector<int > arr){
    int n = arr.size();
        int ans = 0, base = 0;
        
        while(base < n){
            int end = base;
            if(end + 1 < n && arr[end] < arr[end + 1]){
                while(end + 1 < n && arr[end] < arr[end + 1]){end++;}
            }if(end + 1 < n && arr[end] > arr[end + 1]){
                while(end + 1 < n && arr[end] > arr[end + 1]){end++;}
                ans = max(ans, end - base + 1);
            }
            base = max(end, base + 1);
        }
    return ans;
    
}

int main(){
    int n;cin >> n;
    vector<int > arr(n);
    for(int i = 0; i < n;){cin >> arr[i];}
    cout<<solve(arr)<<'\n';
}