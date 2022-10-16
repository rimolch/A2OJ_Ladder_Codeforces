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
     int n,k;cin>>n>>k;
     vector<int>ar(n);
     int c =0;
     for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==1){
            c++;
        }
     }
     if(c>=1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     }
     return 0;
}
