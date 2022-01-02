#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k, int arr[]){
    // 1 2 3 4 5 6

    int i = 0, j = 0, cP = 1;
    int total = 0;
    while(j < n){
        cP *= arr[j];
        while(i < n && cP >= k){
            cP /= arr[i];
            i++;
        }
        if(cP < k){total += j - i + 1;}
        j++;
    }   
    return total;
}

int main(){
    int n, k;cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n;){cin >> arr[i++];}

    cout<<solve(n, k, arr)<<'\n';
    return 0;

}