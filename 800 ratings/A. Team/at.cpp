#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,a,b,c,i,count=0,sum;
     cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a>>b>>c;
       sum = a+b+c;
       if(sum>=2)
        {
          count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
