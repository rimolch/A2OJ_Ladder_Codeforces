#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     int ar[5005],x,p[300000],q[300000],y=0;
     int n;
     cin>>n;
     for(int i=1;i<=2*n;i++){
		cin>>x;
		if(ar[x]==0){
			ar[x]=i;
		}
		else{
			p[y]=ar[x];
			q[y++]=i;
			ar[x]=0;
		}
     }
     if(y!=n)cout<<-1<<endl;
     else{
		for(int i=0;i<n;i++){
			cout<<p[i]<<" "<<q[i]<<endl;
		}
     }
     return 0;
}
