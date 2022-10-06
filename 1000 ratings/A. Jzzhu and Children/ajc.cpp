#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]%m==0){
            a[i]/=m;
        }
        else{
            a[i]=a[i]/m+1;
        }
    }
    int maxi =*max_element(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        if(maxi==a[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    checkmate
}
