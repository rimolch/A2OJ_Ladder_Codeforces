#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,j,l,s=0,k=0,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        s = (a+k)-b;
        if(s<0)
        {
            k=0;
        }
        else
        {
            k = s;
        }
    }
    cout<<s;
    return 0;
}
