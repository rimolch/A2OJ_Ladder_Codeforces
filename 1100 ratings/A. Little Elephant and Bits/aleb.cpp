#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    int one=0,zeros=0;
    for(int i=0;i<s.size();i++){
          if(s[i]!='0'){
              one++;
          }
          else{
              zeros++;
          }
    }
    if(one==s.size() || zeros==s.size()){
          for(int i=0;i<s.size()-1;i++){
              cout<<s[i];
          }
    }
    else{
       for(int i=0;i<s.size();i++){
           if(s[i]=='0'){
              s.erase(i,1);
              break;
           }
       }
       for(int i=0;i<s.size();i++){
            cout<<s[i];
       }
    }
    return 0;
}
