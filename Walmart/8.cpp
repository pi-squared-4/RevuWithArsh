#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int height(int N){
        // code here
        //n*(n + 1)/2 = N
        //0 = n*n + n - 2*N
        return (-1 + sqrt(1 + 8*N))/2;
    }
};

int main(){
    
}