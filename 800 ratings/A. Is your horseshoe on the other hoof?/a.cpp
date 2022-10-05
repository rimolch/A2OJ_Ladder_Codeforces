#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int i;
    int a[1000],c=0;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(i=0;i<3;i++)
    {
       if(a[i]==a[i+1])
       {
           c+=1;
       }
    }
    cout<<c<<endl;
    return 0;
}
