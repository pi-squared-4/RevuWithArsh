#include<bits/stdc++.h>
using namespace std;

string solve(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    vector<int > a1;
    vector<int > a2;
    string a = "";
    for(int i = 0; i < n; i++){
        if(s1[i] != '.'){
            a += s1[i];
        }else{
            a1.push_back(stoi(a));
            a = "";
        }
    }    
    for(int i = 0; i < m; i++){
        if(s2[i] != '.'){
            a += s2[i];
        }else{
            a2.push_back(stoi(a));
            a = "";
        }
    }    
}

int main(){

}