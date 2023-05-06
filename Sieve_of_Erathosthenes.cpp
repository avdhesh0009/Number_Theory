#include<bits/stdc++.h>
using namespace std;
// Time complexity of sieve O(N*log(N))
vector<int> getprime1toN(int n){
    vector<int>isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(!isprime[i]) continue;
        for(int j=i*i;j<=n;j+=i){
            isprime[j]=false;
        }
    }
    vector<int>v;
    for(int i=0;i<=n;i++){
        if(isprime[i]) v.push_back(i);
    }
    return v;
}
void solve(){
    int n;
    cin>>n;
    vector<int>isprime=getprime1toN(n);
    for(int i=0;i<isprime.size();i++){
         cout<<isprime[i]<<" ";
    }
}
int main(){
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
   return 0;
}
