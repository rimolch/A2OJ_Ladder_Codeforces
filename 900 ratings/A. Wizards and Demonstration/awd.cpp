#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    double n,x,y;
    cin>>n>>x>>y;
    double ans = (double)((n*y) /100);
    if(ans!=(int)ans){
        if((int)ans+1>x){
            cout<<(int)ans+1-x<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(ans>x){
            cout<<ans-x<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
