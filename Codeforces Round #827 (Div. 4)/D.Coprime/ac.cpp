#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll t;
     cin>>t;
     while(t--){
        int n,x,ar[10001]={0};
        cin>>n;
        for(int i=1;i<=n;i++){
          cin>>x;
           ar[x]=i;
        }
        int maxi=-1;
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(ar[i]&& ar[j] && (__gcd(i,j))==1){
                    maxi=max(maxi,ar[i]+ar[j]);
                }
            }
        }
        cout<<maxi<<endl;
     }
     return 0;
}
