#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=2;
    int ans =min(n,2);
    for(int i=2;i<n;i++){
        if(a[i]==a[i-1]+a[i-2]){
            c++;
        }
        else{
            c=2;
        }
        if(c>ans){
            ans=c;
        }
    }
    cout<<ans;
    return 0;
}
