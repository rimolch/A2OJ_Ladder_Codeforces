#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string a,b,c;
    cin>>a>>b;
    ll res=stoi(a)+stoi(b);
    string last_s = to_string(res);
    a.erase(remove(a.begin(),a.end(),'0'),a.end());
    b.erase(remove(b.begin(),b.end(),'0'),b.end());
    last_s.erase(remove(last_s.begin(),last_s.end(),'0'),last_s.end());
    if(stoi(a)+stoi(b)==stoi(last_s)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
 
}
