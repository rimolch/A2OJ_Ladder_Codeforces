#include<bits/stdc++.h>

using namespace std;
#define ll                   long long int
#define endl  	             "\n"
int main(){
    fast
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //cout<<bitset<16>(n)<<endl;//deci_to_binary
    //cout<<oct<<n<<endl;//deci_to_oct
    //cout<<hex<<n<<endl;//deci_to_hexa
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0;i<k;i++){
       sum+=v[i];
    }
    int mini=sum,index=0,temp;
    for(int i=0;i<n-k;i++){
         sum+=v[i+k]-v[i];
         if(mini>sum){
            index=i+1;
            mini =sum;
         }
    }
    cout<<index+1;
    return 0;
}
