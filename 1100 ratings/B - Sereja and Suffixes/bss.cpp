#include<bits/stdc++.h>
#define ll long long int
#define MOD 1073741824
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll n,m,x,y;
     cin>>n>>m;
     set<ll>s;
     vector<ll>v;
     for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
     }
     for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        v[i]=s.size();
     }
     for(int i=0;i<m;i++){
        cin>>y;
        cout<<v[y-1]<<endl;
     }
     return 0;
}
