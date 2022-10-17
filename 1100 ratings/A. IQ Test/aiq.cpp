#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     string s[4];
     for(int i=0;i<4;i++){
        cin>>s[i];
     }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(s[i][j]+s[i][j+1]+s[i+1][j]+s[i+1][j+1]!=162){
               cout<<"YES";
               return 0;
            }
        }
     }
     cout<<"NO";
     return 0;
}
