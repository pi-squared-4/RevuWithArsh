#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        int n = s.size();
        string out = "";
        for(int i = 0; i < n; i++){
            if((int)s[i] >= 65 && (int)s[i] <= 90){
                if(i != 0)out = out + " ";
                out = out + char((int)s[i] + 32);
            }else{
                out = out + s[i];
            }
        }
        return out;
    }
        
};
