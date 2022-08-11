#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
     ll n;
     cin>>n;
     ll ar[n];
     map<ll,ll>mp;
     for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
     }
     ll mini=*min_element(ar,ar+n);
     ll tmp;
     for(int i=0;i<n;i++){
        if(ar[i]==mini){
            tmp=i+1;
        }
     }
     if(mp[mini]>=2){
        cout<<"Still Rozdil"<<endl;
     }
     else{
        cout<<tmp<<endl;
     }
     return 0;
}
