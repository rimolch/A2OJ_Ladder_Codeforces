#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    map<string,int>mp;
    int maxi=0;
    for(auto u:v){
      mp[u]++;
      maxi=max(maxi,mp[u]);
    }
    string ans;
    for(auto u:v){
        if(mp[u]==maxi){
            ans=u;
            break;
        }
    }
    cout<<ans<<endl;
    checkmate
}
