#include<bits/stdc++.h>
#define ll long long
const int mx=1e5+123;
int ar[mx];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;//BGGBG
    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B'&& s[i+1]=='G'){
                swap(s[i],s[i+1]);//GBGBG
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
