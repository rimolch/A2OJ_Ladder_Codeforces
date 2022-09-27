#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
		string s;
		cin>>s;
		int n=s.size();
		char mn ='9';
		for(int i=n-1;i>=0;i--){
			mn =min(mn,s[i]);
			if(s[i]!='9'&&s[i]>mn){
				s[i]++;
			}
		}
		sort(s.begin(),s.end());
		cout<<s<<endl; 
    }
    return 0;
}
