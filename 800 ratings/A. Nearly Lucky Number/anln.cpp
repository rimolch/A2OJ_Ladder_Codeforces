#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n,s;
    int i,count=0;
    cin>>n;
    while(n!=0)
    {
       s = n%10;
       if(s==4||s==7)
       {
           count++;
       }
       n = n/10;
    }
    if(count == 4 || count == 7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
 
