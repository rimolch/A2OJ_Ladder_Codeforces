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
/*
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
		ll q;
		cin>>q;
		bool flagA=0,flagB=0;
		ll cntA=0,cntB =0;
		while(q--){
		   ll d,k;
		   string s;
		   cin>>d>>k>>s;
		  for(int i=0;i<s.size();i++){
			  if(d==1){
				  if(s[i]>'a')flagA=1;
				  else cntA+=k;
			  }
			  else{
				  if(s[i]>'a')flagB=1;
				  else cntB+=k;
			  }
		   }
		   if(flagB==1)cout<<"YES"<<endl;
		   else if(flagA==0&&cntA<cntB)cout<<"YES"<<endl;
		   else cout<<"NO"<<endl;
		}
	 }
	return 0;
}
*/
