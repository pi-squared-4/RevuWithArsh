#include<bits/stdc++.h>
using namespace std;

int solve(int n, int arr[]){
    int maxx = -1;
    int present[10004] = {0};
    for(int i = 0; i < n; i++){present[arr[i]] = 1;}
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int d = arr[j] - arr[i];
            int c = 2, curr = arr[j];
            while(curr + d < 10004 && present[curr + d]){
                c += 1;
                curr += d;
            }maxx = max(maxx, c);
        }
    }return maxx;
}

int main(){

}