#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size(), a = 0, b = 0;
        char curr = colors[0];
        int currLen = 1;
        for(int i = 1; i < n; i++){
            if(colors[i] == 'A'){ 
                if(curr == colors[i]){
                    currLen+=1;
                }else{
                    b += max(0, currLen - 2);
                    curr = colors[i];
                    currLen = 1;
                }
            }else{
                if(curr == colors[i]){
                    currLen += 1;
                }else{
                    a += max(0, currLen -2);
                    curr = colors[i];
                    currLen = 1;
                }
            }
        }if(curr == 'A'){
            a += max(0, currLen - 2);
        }else{
            b += max(0, currLen - 2);
        }
        cout<<a<<b<<'\n';
        if(a > b){
            return true;
        }return false;
        
    }
};

int main(){
    
}