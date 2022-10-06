#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
     int n,m;
     cin>>n>>m;
     int ar[m];
     for(int i=0;i<m;i++){
        cin>>ar[i];
     }
     ll s=0;
     s+=ar[0]-1;
     for(int i=0;i<m-1;i++){
        if(ar[i]<=ar[i+1]){
            s+=ar[i+1]-ar[i];
        }
        else if(ar[i]>ar[i+1]){
            s+=n-ar[i]+ar[i+1];
        }
     }
     cout<<s<<endl;
     return 0;
}
