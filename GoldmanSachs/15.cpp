#include<bits/stdc++.h>
using namespace std;

bool solve(int k, vector<int > nums){
    map<int, int> m;
        for(auto i: nums){
            m[i%k]++;
        }
        if(m[0] % 2 != 0)return false;
        for(auto i: m){
            if(i.first != 0 && m[k - i.first] != i.second){
                return false;
            }
        }
        return true;
}

int main(){
    int n;cin >> n;
    vector<int > arr;
    cout<<solve(n, arr)<<'\n';
    return 0;
}