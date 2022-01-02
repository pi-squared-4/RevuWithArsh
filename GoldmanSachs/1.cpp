#include<bits/stdc++.h>
using namespace std;

vector<vector<string> > solve(vector<string> &arr){
    vector<vector<string>> output;
    map<string, vector<string> > mp;

    int n = arr.size();

    for(int i = 0; i < n; i++){
        string k = arr[i];
        sort(k.begin(), k.end());
        if(mp.find(k) == mp.end()){
            vector<string > a = {arr[i]};
            mp.insert(make_pair(k, a));
        }else{
            auto it = mp.find(k);
            it->second.push_back(arr[i]);
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        vector<string > a;
        for(auto i: it->second){
            a.push_back(i);
        }
        output.push_back(a);
    }
    return output;
    
}

int main(){
    //Input
    int n;cin >> n;
    vector<string> arr(n);
    for(int i = 0; i<n;){cin >> arr[i++];}

    vector<vector<string> > output = solve(arr);
    for(auto i: output){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<'\n';
    }

    return 0;
}