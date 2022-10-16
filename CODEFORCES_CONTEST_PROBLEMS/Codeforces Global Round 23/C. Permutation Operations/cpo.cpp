#include<iostream>
using namespace std;
int n,ar[100005],x;
int main() {
	// your code goes here
     int t;
     cin>>t;
     while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x;
            ar[x]=i+1;
        }
        for(int i=1;i<=n;i++){
            cout<<min(ar[i],n)<<" ";
        }
        cout<<'\n';
     }
	return 0;
}
