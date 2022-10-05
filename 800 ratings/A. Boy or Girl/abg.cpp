#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    int i,j,count=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
           if(s[i]!=s[i+1])
           {
               count+=1;
           }
          /* else
           {
               count+=1;
           }*/
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
 
