#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    int i,n,count=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            count+=1;
        }
    }
      cout<<count<<endl;
    return 0;
}
