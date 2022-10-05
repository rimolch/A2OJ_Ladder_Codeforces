#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s,r,p;
    int i,c1=0,c2=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            c1++;
        }
        if(s[i]>=97&&s[i]<=122)
        {
            c2++;
        }
    }
 
    if(c1>c2)
    {
        for(i=0;i<s.size();i++)
        {
            s[i] = toupper(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
