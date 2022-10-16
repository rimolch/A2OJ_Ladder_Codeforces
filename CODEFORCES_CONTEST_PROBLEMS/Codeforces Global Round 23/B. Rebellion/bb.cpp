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
       int n;
       cin>>n;
       vector<int>ar(n);
       for(int i=0;i<n;i++){
        cin>>ar[i];
       }
       if(is_sorted(ar.begin(),ar.end())){
            cout<<0<<endl;
            continue;
        }
       int l,r,ans=0;
       for(int i=0;i<n;i++){
           if(ar[i]==1){
               l=i;
               break;
           }
       }
       for(int i=n-1;i>=0;i--){
           if(ar[i]==0){
               r =i;
               break;
           }
       }
       while(l<r){
           if(ar[l]==1 && ar[r]==0){
               ar[l]--;
               ar[r]++;
               ans++;
           }
           else if(ar[l]==0){
               l++;
           }
           else if(ar[r]==1){
               r--;
           }
       }
       cout<<ans<<endl;
     }
     return 0;
}
//second methos
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
       int n;
       cin>>n;
       int ar[100003];
       int sum=0;
       for(int i=1;i<=n;i++){
          cin>>ar[i];
          sum+=ar[i];
       }
       int ans=0;
       for(int i=n-sum+1;i<=n;i++){
        if(!ar[i]){
            ans++;
        }
       }
       cout<<ans<<endl;
     }
    return 0;
}
