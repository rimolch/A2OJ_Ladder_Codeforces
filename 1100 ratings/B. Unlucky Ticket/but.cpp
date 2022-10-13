#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;
ll n,s,ar[3000018];
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n;
     cin>>n;
     string s;
     cin>>s;
     string l,r;
     l =s.substr(0,n);
     r =s.substr(n);
     /*here s.substr(0,n) & s.substr(n) mean if we are taking i/p as 2421 it divides into two sub string like 24  21 */
     std::sort(l.begin(),l.end());
     std::sort(r.begin(),r.end());
     int flag=0,ss=0;
     for(int i=0;i<n;i++){
        flag+=(l[i]>r[i]);
        ss+=(r[i]>l[i]);
     }
     if(flag==n||ss==n)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     return 0;
}
