#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
const int mx=100;
int ar[mx][mx];
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    if(n%2)cout<<"-1"<<endl;
    else{
		for(int i=1;i<=n;i+=2){
			cout<<i+1<<" "<< i <<" ";
		}
    }
    return 0;
}
