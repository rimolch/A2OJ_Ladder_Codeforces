#include<bits/stdc++.h>

#define ll long long int

using namespace std;
int ar[100005],c=0;
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
           c++;
        }
        ar[i]=c;
    }
    int m;
    cin>>m;
    while(m--){
        int l,r,c=0;
        cin>>l>>r;
        cout<<ar[r-1]-ar[l-1]<<endl;
    }
    return 0;
}
