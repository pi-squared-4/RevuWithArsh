#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        if(a==1||b==1) return 1;
         
        int dp[a][b];
        
        for(int i=0;i<a-1;i++)
          dp[i][b-1]=1;
          
         for(int j=0;j<b-1;j++) 
           dp[a-1][j]=1;
           
         for(int i=a-2;i>=0;i--)  {
             for(int j=b-2;j>=0;j--){
                 dp[i][j]=dp[i+1][j]+dp[i][j+1];
             }
         }
         
         return dp[0][0];
    }
};

int main(){

}