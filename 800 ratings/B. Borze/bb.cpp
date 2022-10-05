#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
const int mx=1e5+123;
int ar[mx];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;//.-.--
    for (int i =0;i<s.size();i++){
       if(s[i]=='.'){
            cout<<0;
       }
       else if(s[i]=='-'){
           if(s[i+1]=='.'){
            cout<<1;
           }
           else{
            cout<<2;
           }
        i++;
       }
    }
    return 0;
}
