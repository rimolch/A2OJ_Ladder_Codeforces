#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n,a,b,c,ans =0;
     cin>>n>>a>>b>>c;
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int k =(n-(a*i+b*j))/c;
            if(k<0) k =0;//it can be negative so we assign then k =0
            if((a*i+b*j+c*k)==n){
                ans = max(ans,i+j+k);
            }
        }
     }
     cout<<ans;
     return 0;
}
