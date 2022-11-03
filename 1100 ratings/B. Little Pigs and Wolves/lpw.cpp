#include<bits/stdc++.h>

using namespace std;
char ar[11][11];
int main(){
   int n,m;
   cin>>n>>m;
   int c=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>ar[i][j];
      }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(ar[i][j]=='W'){
            if(ar[i+1][j]=='P'||ar[i-1][j]=='P'||ar[i][j-1]=='P'||ar[i][j+1]=='P'){
                c++;
            }
         }
      }
   }
   cout<<c;
   return 0;
}
