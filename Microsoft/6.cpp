#include<bits/stdc++.h>
using namespace std;

string keypad[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(int currIndex, int n, vector<int > arr, string ds, vector<string > &ans){
    if (currIndex >= n){
        ans.push_back(ds);
        return;
    }
    int currNum = arr[currIndex];
    string currString  = keypad[currNum];
    for(auto i: currString){
        ds.push_back(i);
        helper(currIndex + 1, n, arr, ds, ans);
        ds.pop_back();
    }


}

vector<string > solve(int n, vector<int > arr){
    vector<string > ans;
    if(n == 0) return ans;
    string workingString;
    helper(0, n, arr, workingString, ans);
}

int main(){
    int n; cin >> n;
    vector<int  > arr;
    for(int i =0 ; i < n; i++){cin>>arr[i];}
    vector<string > output = solve(n, arr);
    return 0;
}