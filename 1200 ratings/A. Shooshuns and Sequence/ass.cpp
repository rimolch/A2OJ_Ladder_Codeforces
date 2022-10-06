#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	int ar[100005];
	for(int i=0;i<n;i++)cin>>ar[i];
	while(n-- && n!=0){
		if(ar[n]!=ar[n-1]){
			break;
		}
	}
	if(k>n) cout<<n<<endl;
	else cout<<-1<<endl;
	return 0;
}
