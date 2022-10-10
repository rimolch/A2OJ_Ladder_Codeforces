#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	//1 1 1 1 2 2 3 -->> 1 2 1 2 1 3 1
	int n;
	cin>>n;
	map<int,int>mp;
	for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
	}
	int maxi =-1;
	for(int i=0;i<mp.size();i++){
        maxi =max(maxi,mp[i]);
	}
	if(2*maxi-1<=n)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
