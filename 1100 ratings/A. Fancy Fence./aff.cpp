#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int angle;
       cin>>angle;
       double n =360.0/(180.0-(double)angle);
       if(n==(int)n)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;

}
