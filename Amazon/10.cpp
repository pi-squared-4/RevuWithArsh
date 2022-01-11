#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n;
    char nuts[n];
    char bolts[n];
    for(int i = 0; i < n; i++){
        cin >> nuts[i];
    }
    for(int i = 0; i < n; i++){
        cin >> bolts[i];
    }

    // unordered_map<char, int> mp;
    vector<vector<char > > mp;
    // mp.insert({'!', 0});mp.
    char ch[9] = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};

    for(auto i: ch){
        // mp.insert({i, 0});
        mp.push_back({'!'});
    }
    for(int i = 0; i < n; i++){
        for(auto j: mp){
            if(j[0] == nuts[i]){j.push_back(nuts[i]);break;}
        }
    }
    for(int i = 0; i < n; i++){
        for(auto j: mp){
            if(j[0] == bolts[i]){j.push_back(nuts[i]);break;}
        }
    }
    for(int i = 0; i<9; i++){
        cout<<mp[i].size()<<'\n';
        if(mp[i].size() > 2){cout<<mp[i][0]<<" ";}
    }cout<<'\n';
    for(int i = 0; i<9; i++){
        if(mp[i].size() > 2){cout<<mp[i][0]<<" ";}
    }cout<<'\n';

}

int main(){
    solve();
    return 0;
}


