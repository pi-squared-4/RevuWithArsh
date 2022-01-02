#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<long long > s;
    n--;
    while(n--){
        auto it = s.begin();
        long long x = *it;
        s.erase(it);
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
    }
    cout<< *s.begin() << '\n';
}