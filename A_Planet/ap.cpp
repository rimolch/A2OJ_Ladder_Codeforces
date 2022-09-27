#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
		int n,x;
		cin>>n>>x;
		int ans=0;
		vector<int>ar(n);
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
			cin>>ar[i];
			mp[ar[i]]++;
			if(mp[ar[i]]<=x){
				ans++;
			}
	    }
	    cout<<ans<<endl;
    }
}
