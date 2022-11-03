#include<bits/stdc++.h>
 
using namespace std;
int ar[1003];
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
     cin>>ar[i];
   }
   sort(ar,ar+n);
   swap(ar[0],ar[n-1]);
   for(int i=0;i<n;i++){
      cout<<ar[i]<<" ";
   }
   return 0;
}
