#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ekso=0,duiso=0;
	for(int i=0;i<n;i++){
		int  x;
		cin>>x;
		if(x==100) ekso++;
		else duiso++;
	}
	if(ekso>=duiso%2 && ekso%2==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
