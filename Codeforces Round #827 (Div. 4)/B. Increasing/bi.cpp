#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         vector<ll>v;
         for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
         }
         sort(v.begin(),v.end());
         bool flag =1;
         for(int i=0;i<v.size()-1;i++){
           if(v[i]==v[i+1]){
               flag =0;
               break;
           }
         }
         if(flag)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     return 0;
}
