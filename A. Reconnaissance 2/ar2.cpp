#include<bits/stdc++.h>

using namespace std;
int ar[1001];
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
     int mini=INT_MAX;
     int i,t1,t2;
     for(i=0;i<n-1;i++){
       if(abs(ar[i]-ar[i+1])<mini){
          mini=abs(ar[i]-ar[i+1]);
            t1=i+1;
            t2=i+2;
        }
     }
     if(abs(ar[0]-ar[n-1])<mini){
       t1=1;
       t2=n;
     }
     cout<<t1<<" "<<t2;
     return 0;
}
