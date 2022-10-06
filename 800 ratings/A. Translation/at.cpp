#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s,t;
    int i,j,len1,len2,len,count=0;
    cin>>s;
    cin>>t;
    len1 = s.size();
    len2 = t.size();
    if(len1==len2)
    {
        len = len1;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
      for(i=0,j=len-1;i<len;i++,j--)
      {
        if(s[i]==t[j])
        {
           count++;
        }
      }
     if(count==len)
     {
        cout<<"YES";
     }
    else
    {
        cout<<"NO";
    }
 
    return 0;
}
