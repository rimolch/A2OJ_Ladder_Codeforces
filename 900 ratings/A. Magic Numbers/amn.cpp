#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
    string s;
    cin>>s;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]!='1'&&s[i]!='4'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(s[0]!='1'){
            cout<<"NO"<<endl;
            return 0;
    }
    if(s.find("444")!=-1) {
            cout<<"NO"<<endl;
            return 0;
    }
    else {
            cout<<"YES"<<endl;
    }
    checkmate
}
