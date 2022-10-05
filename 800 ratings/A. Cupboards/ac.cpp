#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
    int n,c=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        c+=l;
        d+=r;
    }
    cout<<min(c,n-c)+min(d,n-d)<<endl;
    checkmate
}
