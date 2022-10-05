#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
	ll n;
	cin>>n;
	vector<ll>ar(n);
	map<ll,ll>mp;
	for(ll i=0;i<n;i++){
		cin>>ar[i];
		mp[ar[i]]++;
	}
	sort(ar.begin(),ar.end());
	ll maxi=0;
	for(ll i=0;i<n;i++){
		maxi=max(maxi,mp[ar[i]]);
	}
	if(maxi==n){
		cout<<"0"<<" "<<(n*(n-1))/2<<endl;
	}
	else{
      ll max_diff = ar[n-1]-ar[0];
      ll steps=0;
      steps = mp[ar[0]]*mp[ar[n-1]];
     cout<<max_diff<<" "<<steps<<endl;
	}
	return 0;
}
