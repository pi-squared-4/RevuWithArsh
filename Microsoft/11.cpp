#include<bits/stdc++.h>
using namespace std;

string toBinary(int num)
    {
        string binary;
        for(int i=31;i>=0;i--)
        {
            int bit = num>>i;
            if(bit&1) binary.push_back('1');
            else binary.push_back('0');
        }
        
        return binary.substr(binary.find('1'));
    }
vector<string> generate(int N)
{
	// Your code here
	vector<string>res;
	for(int i=1;i<=N;i++)
	{
	    res.push_back(toBinary(i));
	}
	
	return res;
	
}

int main(){

}