#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
	while(t--){
		long long q;
		cin>>q;
		bool flagA=0,flagB=0;
		long long cnta=0,cntb=0;
			while(q--){
				long long d,k; cin>>d>>k;
			    string str;
			    cin>>str;
			    for(long long i=0;i<str.length();i++){
				     if(d==1){
					     if(str[i]!='a') flagA = 1;
						 else cnta+=k;
				     }
				     else{
					     if(str[i]!='a') flagB=1;
					     else cntb+=k;
				     }
			   }
			  if(flagB==true) cout<<"YES"<<endl;
			  else if(flagA==false && cnta<cntb) cout<<"YES"<<endl;
			  else cout<<"NO"<<endl;
		  }
 	}
	return 0;
}
