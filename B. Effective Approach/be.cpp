#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    cin>>n;
    long long m,x,v=0,p=0;
    int ar[100003];
    for(int i=0;i<n;i++){
        cin>>x;
        ar[x]=i;
    }
    cin>>m;
    while(m--){
        cin>>x;
        v+=ar[x]+1;
        p+=n-ar[x];
    }
    cout<<v<<" "<<p;
    return 0;
}
