//2.cpp
#include<bits/stdc++.h>
using namespace std;

int solve(int l1[], int r1[], int l2[], int r2[]){
    if((l2[0] <= r1[0] && l2[0] >= l1[0])){
        if(r2[1] <= l1[1] && l2[1] >= r1[1]){
            return 1;
        // }if(l2[1] >= r1[1] && l2[1] <= l1[1]){
        //     return 1;
        // }
        }
    }if((r2[0] >= l1[0] && r2[0] <= r1[0])){
        if(l2[1] >= r1[1] && r2[1] <= l1[1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int l1[2], r1[2], l2[2], r2[2];
    for(int i = 0; i < 2;){cin>>l1[i++];}
    for(int i = 0; i < 2;){cin>>r1[i++];}
    for(int i = 0; i < 2;){cin>>l2[i++];}
    for(int i = 0; i < 2;){cin>>r2[i++];}

    cout<<solve(l1, r1, l2, r2)<<'\n';

}