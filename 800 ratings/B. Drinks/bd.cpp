#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n,i;
    float avg =0,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    avg = sum/n;
    cout<<avg;
    return 0;
}
