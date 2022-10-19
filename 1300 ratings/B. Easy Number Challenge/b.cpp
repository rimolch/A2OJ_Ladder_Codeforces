#include<bits/stdc++.h>
#define ll long long int
#define MOD 1073741824
using namespace std;
int d[1000010],a,b,c,sum;
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     for(int i=1;i<=1000000;i++){
        for(int j=i;j<=1000000;j+=i){
            d[j]++;
        }
     }
     cin>>a>>b>>c;
     for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                sum+=d[i*j*k]% MOD;
            }
        }
     }
     cout<<sum%MOD;
     return 0;
}
