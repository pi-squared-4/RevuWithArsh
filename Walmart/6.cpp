#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
          long long res=1;
      
      while(R>0)
      {
          if(R&1)//R is odd
          {
              res=(res*N)%1000000007;
          }
          
          N=(N*N)%1000000007;
          R=R>>1;
      }
      
      
      return res;
        
    }

};

int main(){
    
}   