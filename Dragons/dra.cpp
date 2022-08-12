#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int s,n;
    cin>>s>>n;
    pair<int,int>p[10000];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    bool flag=1;
    for(int i=0;i<n;i++){
        if(s<=p[i].first){
           flag=0;
           break;
        }
        else{
            s+=p[i].second;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
