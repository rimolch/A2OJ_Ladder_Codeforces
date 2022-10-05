#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int value;
    int maxiindex = 0,maxivalue =0,miniindex = 0,minivalue = 140;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(value>maxivalue)
        {
            maxiindex=i;
            maxivalue=value;
        }
        if(value<=minivalue)
        {
            miniindex = i;
            minivalue = value;
        }
    }
    if(maxiindex>miniindex)
    {
       cout<<(maxiindex-1)+(n-miniindex)-1<<endl;
    }
    else
    {
        cout<<(maxiindex-1)+(n-miniindex)<<endl;
    }
    return 0;
}
