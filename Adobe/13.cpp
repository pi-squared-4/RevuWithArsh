#include<bits/stdc++.h>
using namespace std;

int lcs(string str1, string str2, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;
 
    // Following steps build L[m+1][n+1] in bottom
    // up fashion. Note that L[i][j] contains
    // length of LCS of str1[0..i-1] and str2[0..j-1]
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
 
            else if (str1.at(i - 1) == str2.at(j - 1))
                L[i][j] = L[i - 1][j - 1] + 1;
 
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
 
    // L[m][n] contains length of LCS
    // for X[0..n-1] and Y[0..m-1]
    return L[m][n];
}

class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        // Let ln be the length of LCS, output = n - ln + m - ln;
    }
};


int main(){

}