#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    int i,j;
    int A[110][110];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
        sum1+=A[i][0];
        sum2+=A[i][1];
        sum3+=A[i][2];
    }
    if(sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
