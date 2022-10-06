#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        bool k(0),l(0),m(0),p(0);
        for(int j=0;j<n;j++){
            if(x[j]>x[i]&&y[j]==y[i]){
                k=1;
            }
            if(x[j]<x[i]&&y[j]==y[i]){
                l=1;
            }
            if(x[j]==x[i]&&y[j]<y[i]){
                m=1;
            }
            if(x[j]==x[i]&&y[j]>y[i]){
                p=1;
            }
        }
        if(k&&l&&m&&p)c++;
    }
    cout<<c<<endl;
    checkmate
}
