#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int>ar(m);
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int ans=INT_MAX;
	for(int i=0;i<=m-n;i++){
		ans=min(ans,ar[i+n-1]-ar[i]);
	}
	cout<<ans<<endl;
	return 0;
}
