#include <bits/stdc++.h>
#define MOD 998244353
#define ll long long int
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int c=0;
	bool is_ok =true;
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			c++;
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(c==2&&a==b)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
