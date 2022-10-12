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
     for(int i=0;i<n;i++)cin>>ar[i];
     sort(ar,ar+n);
     for(int i=0;i<n;i++)s+=abs(i+1-ar[i]);
     cout<<s<<endl;
     return 0;
}
