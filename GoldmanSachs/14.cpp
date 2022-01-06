#include<bits/stdc++.h>
using namespace std;

int solve(vector<int > nums, int target){
    int n = nums.size(), ans = INT_MAX;
        int left = 0, summ = 0;
        for(int i = 0; i < n; i++){
            summ += nums[i];
            while(summ >= target){
                ans = min(ans, i + 1 - left);
                summ -= nums[left++];
            }
        }
        return (ans != INT_MAX)? ans: 0;
}

int main(){
    int n;cin >> n;
    vector<int > arr(n);
    
    for(int i = 0; i < n;){cin >> arr[i++];}
    cout<<solve(arr, n)<<'\n';
    
    return 0;
}