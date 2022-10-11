#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int b[n+1]={0};
        int flag =1;
        for(int i=0;i<n;i++)cin>>ar[i];
        b[0]=ar[0];
        b[n]=ar[n-1];
        for(int i=1;i<n;i++){
            b[i]=(ar[i-1]*ar[i])/__gcd(ar[i-1],ar[i]);
        }
        for(int i=0;i<n-1;i++){
            if(__gcd(b[i],b[i+1])!=ar[i]){
                flag =0;
                break;
            }
        }
        if(!flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
	return 0;
}
