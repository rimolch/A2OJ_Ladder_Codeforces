#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n,m;
     cin>>n>>m;
     if(n>=m){
        for(int i=0;i<m;i++){
          cout<<"BG";
        }
        for(int i=0;i<(n-m);i++){
         cout<<"B";
        }
        cout<<endl;
     }
     else{
         for(int i=0;i<n;i++){
            cout<<"GB";
         }
         for(int i=0;i<(m-n);i++){
                cout<<"G";
         }
         cout<<endl;
     }
     return 0;
}
