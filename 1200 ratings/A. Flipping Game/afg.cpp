#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
     int n,x;
     cin>>n;
     vector<int>v;
     vector<int>temp;
     for(int i =0;i<n;i++){
         cin>>x;
         v.push_back(x);
     }
     if(n==1 && v[0]==0){
         cout<<1<<endl;
         return 0;
     }
    // temp = v;
      int ans =0;
         int c;
         for(int i = 0;i<n-1;i++){
             for(int j =i;j<n;j++){
                 temp = v;
                 for(int k =i;k<=j;k++){
                     temp[k]=1-temp[k];
                 }
                 c = count(temp.begin(),temp.end(),1);
                 ans = max(ans,c);
             }
         }
    cout<<ans<<endl;
     return 0;
}
