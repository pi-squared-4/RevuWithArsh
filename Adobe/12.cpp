#include<bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int > output;
        int cMax = -1;
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] >= cMax){
                output.emplace_back(arr[i]);
                cMax = arr[i];
            }
        }
        reverse(output.begin(), output.end());
        return output;
    }
};

int main(){
    return 0;
}