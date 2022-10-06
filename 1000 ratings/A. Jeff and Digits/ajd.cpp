#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>ar(n);
    ll f=0,z=0;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        (ar[i]==0)? z++:f++;
    }
    if(f>8&&z>0){
        for(ll i=0;i<(f/9)*9;i++){
            cout<<"5";
        }
        for(ll i=0;i<z;i++){
            cout<<"0";
        }
    }
    else if(z>0){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
    return 0;
}
