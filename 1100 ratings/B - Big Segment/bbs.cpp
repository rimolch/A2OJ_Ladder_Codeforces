#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> >vec;
    int maxi=-1;
    int mini =INT_MAX;
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      vec.push_back(make_pair(a,b));
      maxi=max(maxi,b);
      mini=min(mini,a);
    }
    int ans =-1;
    for(int i=0;i<n;i++){
          if(vec[i].first==mini && vec[i].second==maxi){
              ans = i+1;
          }
    }
    cout<<ans<<endl;
  	return 0;
}
