#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll int_pow(int x,int n){
    ll dig=1;
    for(int i=1;i<=n;i++){
        dig*=x;
    }
    return dig;
}
ll sum_of_dig(int x){
    const int mul =10;
    ll sum =0;
    while(x>0){
        sum+=x%mul;
        x/=mul;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll>v;
    for(int i=1;i<=81;i++){
        ll x =b*int_pow(i,a)+c;
        if(sum_of_dig(x)==i && x>0 && x<1e9){
            v.push_back(x);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
