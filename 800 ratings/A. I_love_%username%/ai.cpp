#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]>max)
         {
             max = a[i];
             c++;
         }
         if(a[i]<min)
         {
             min= a[i];
             c++;
         }
    }
    cout<<c<<endl;
  return 0;
}
