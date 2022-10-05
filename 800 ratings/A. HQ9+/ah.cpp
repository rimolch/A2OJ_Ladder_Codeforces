#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
     string s;
     cin>>s;
     int done =0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            done=1;
            break;
        }
     }
     if(done)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    checkmate
}
