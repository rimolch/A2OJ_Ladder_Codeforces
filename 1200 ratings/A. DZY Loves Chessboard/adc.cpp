#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
int n, m;
char s[1100];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='.'){
                if((i+j)%2/*same as (i+j)&1*/){
                    s[j]='W';
                }
                else{
                    s[j]='B';
                }
            }
        }
        cout<<s<<endl;
    }
    checkmate
}
