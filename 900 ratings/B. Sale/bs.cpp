#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,m;
	cin>>n>>m;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	int sum = 0;
	for(int i=0;i<m;i++){
		if(ar[i]<0) {
			sum+=(-1)*(ar[i]);
		}
	}
	cout<<sum<<endl;
	return 0;
}
