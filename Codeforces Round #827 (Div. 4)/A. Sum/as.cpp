#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
         int a,b,c;
         cin>>a>>b>>c;
          if(a+b==c)cout<<"YES"<<endl;
          else if(a+c==b)cout<<"YES"<<endl;
          else if(b+c==a)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
     }
     return 0;
}
