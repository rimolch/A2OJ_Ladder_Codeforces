#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll n;
     cin>>n;
     ll c=0;
     for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            double a = sqrt(i*i+j*j);
            if(a==(int)a&& i*i+j*j<=n*n){
                c++;
            }
        }
     }
     cout<<c;
     return 0;
}
