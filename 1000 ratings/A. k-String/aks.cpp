#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
#define F first
#define S second
using namespace std;
 
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    string tmp="";
    for(auto u:mp){
        if(u.S%k!=0){
            cout<<"-1"<<endl;
            return 0;
        }
        else{
            int times =u.S/k;
            for(int i=0;i<times;i++){
                tmp+=u.F;
            }
        }
    }
    string tmp1=tmp;
    for(int i=0;i<k-1;i++){
        tmp1+=tmp;
    }
    cout<<tmp1<<endl;
    checkmate
}
