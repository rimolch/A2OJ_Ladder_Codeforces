#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll y,k,n;
     cin>>y>>k>>n;
     vector<ll>v;
     ll x;
     x=k-y%k;
     if((x+y)>n)cout<<"-1"<<endl;
     else{
        for(;(x+y)<=n;x+=k)cout<<x<<" ";
     }
     return 0;
}
