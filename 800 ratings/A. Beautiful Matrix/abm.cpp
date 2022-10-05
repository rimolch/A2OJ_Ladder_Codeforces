#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int i,j,x=0,result=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {
               result = abs(3-i)+abs(3-j);
               cout<<result<<endl;
            }
        }
    }
    return 0;
}
