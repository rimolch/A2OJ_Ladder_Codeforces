#include <bits/stdc++.h>

using namespace std;

string s,p;
map <char,int> c;
bool is_ok;
int main(){
	getline(cin,s);
	getline(cin,p);
	c[' ']=200;
	for(auto i:s){
		c[i]++;
	}
	for(auto i:p){
	   if(c[i]){
	       c[i]--;
	   }
	   else{
          is_ok =1;
	   }
	}
	//puts(f?"NO":"YES");
	if(is_ok) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
