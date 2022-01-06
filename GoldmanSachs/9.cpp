#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    // IIIIIIDD 345678912 DIIIIIDD 2D1I3i4i5i6i9d8d7

    string output;
    stack<int > st;
    int curr = 1;
    for(auto i: s){
        if(i == 'D'){
            st.push(curr);
            curr++;
        }else{
            st.push(curr);
            curr++;
            while(!st.empty()){
                output += to_string(st.top());
                st.pop();
            }
        }
    }st.push(curr);
    while(!st.empty()){
        output += to_string(st.top());
        st.pop();
    }
    return output;
}

int main(){
    string s;cin>>s;
    cout<<solve(s)<<'\n';

    return 0;
}