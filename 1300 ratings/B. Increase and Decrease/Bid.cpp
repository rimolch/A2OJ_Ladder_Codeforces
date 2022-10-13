#include <bits/stdc++.h>

#define MOD 1073741824

#define ll long long int

#define endl '\n'

using namespace std;

ll n,s,ar[3000018];

int main(){

     ios_base::sync_with_stdio(0);

     cin.tie(0);

     cin>>n;

     int sum=0;

     for(int i=0;i<n;i++)cin>>ar[i],sum+=ar[i];

     if(sum%n==0)cout<<n<<endl;

     else cout<<n-1<<endl;

     return 0;

}
